#include "camera.h"
#include "../Student/student.h"
#include <iostream>
#include <memory>  // Include for smart pointers

 //inițializarea membrilor din constructor
Camera::Camera(int roomNumber, int capacity)
    : roomNumber(roomNumber), capacity(capacity) {}

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


// Assignment Operator
Camera& Camera::operator=(const Camera& other) {
    if (this != &other) {
        roomNumber = other.roomNumber;
        capacity = other.capacity;

        // No need to manually delete memory, unique_ptr handles this automatically
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


// Methods
bool Camera::adaugaStudent(std::unique_ptr<Student> student) {
    if (students.size() < static_cast<size_t>(capacity)) {
        students.push_back(std::move(student)); // Move the student into the vector
        return true;
    }
    return false;
}
