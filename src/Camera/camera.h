#ifndef CAMERA_H
#define CAMERA_H

#include "src/Student/student.h"
#include <vector>

class Camera {
private:
    int roomNumber;
    int capacity;
    std::vector<Student*> students;

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
    bool adaugaStudent(Student* student);
};

#endif // CAMERA_H
