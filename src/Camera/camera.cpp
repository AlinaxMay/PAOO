#include "camera.h"
#include "../Student/student.h"
#include <iostream>
#include <memory>  // Include for smart pointers

 //inițializarea membrilor din constructor
Camera::Camera(int roomNumber, int capacity)
    : roomNumber(roomNumber), capacity(capacity) {
        std::cout << "Camera " << roomNumber << " a fost creata.\n";
    }

// Copy Constructor
Camera::Camera(const Camera& other)
    : roomNumber(other.roomNumber), capacity(other.capacity) {
    for (const auto& student : other.students) {
        students.push_back(std::make_unique<Student>(*student));
    }
}

int Camera::getRoomNumber() const {
    return roomNumber;
}

// Camera (move constructor)
Camera::Camera(Camera&& other) noexcept 
    : roomNumber(other.roomNumber), capacity(other.capacity), students(std::move(other.students)) {
    std::cout << "Move constructor for Camera\n";
}

// Assignment Operator
Camera& Camera::operator=(const Camera& other) {
    if (this != &other) {
        roomNumber = other.roomNumber;
        capacity = other.capacity;

        students.clear();

        // Deep copy
        for (const auto& student : other.students) {
            students.push_back(std::make_unique<Student>(*student));
        }
    }
    return *this;
}

// Destructor
Camera::~Camera() {
    std::cout<<"Apelat destructor camera:" << roomNumber << "\n";
}

void Camera :: afiseaza() const {
        std::cout << "Camera " << roomNumber << ", capacitate: " << capacity << "\n";
    }



// Methods
bool Camera::adaugaStudent(std::unique_ptr<Student> student) {
    if (students.size() < static_cast<size_t>(capacity)) {
        students.push_back(std::move(student)); 
        return true;
    }
    return false;
}
