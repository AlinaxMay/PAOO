#ifndef CAMERA_H
#define CAMERA_H

#include "../Student/student.h"
#include <vector>
#include <memory> // Include for smart pointers

class Camera {
private:
    int roomNumber;
    int capacity;
    std::vector<std::unique_ptr<Student>> students; // Use unique_ptr for memory management

public:
    // Constructor
    Camera(int roomNumber, int capacity);

    // Copy Constructor
    Camera(const Camera& other);

    // Assignment Operator
    Camera& operator=(const Camera& other);

    // Destructor
    ~Camera();

    // Methods
    bool adaugaStudent(std::unique_ptr<Student> student); // Accept unique_ptr to ensure ownership
};

#endif // CAMERA_H
