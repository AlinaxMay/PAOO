#include "Camera.h"

// Constructor
Camera::Camera(int roomNumber, int capacity)
    : roomNumber(roomNumber), capacity(capacity) {}

// Copy Constructor
Camera::Camera(const Camera& other)
    : roomNumber(other.roomNumber), capacity(other.capacity) {
    for (Student* student : other.students) {
        students.push_back(new Student(*student));
    }
}

// Assignment Operator
Camera& Camera::operator=(const Camera& other) {
    if (this != &other) {
        roomNumber = other.roomNumber;
        capacity = other.capacity;

        // Free existing memory
        for (Student* student : students) {
            delete student;
        }
        students.clear();

        // Deep copy
        for (Student* student : other.students) {
            students.push_back(new Student(*student));
        }
    }
    return *this;
}

// Destructor
Camera::~Camera() {
    for (Student* student : students) {
        delete student;
    }
}

// Methods
bool Camera::adaugaStudent(Student* student) {
    if (students.size() < static_cast<size_t>(capacity)) {
        students.push_back(student);
        return true;
    }
    return false;
}
