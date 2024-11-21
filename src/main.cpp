#include "Student/student.h"
#include "Camera/camera.h"
#include <iostream>
#include <memory> // Include for unique_ptr

int main() {
    // Create a student
    std::unique_ptr<Student> student1 = std::make_unique<Student>("Alina", 1001, 2);

    // Create a camera with a capacity of 2 students
    Camera camera1(1, 2);

    // Try to add the student to the camera
    if (camera1.adaugaStudent(std::move(student1))) {
        std::cout << "Studentul a fost adaugat in camera.\n";
    } else {
        std::cout << "Camera este plina.\n";
    }

    return 0;
}
