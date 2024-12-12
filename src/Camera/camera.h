#ifndef CAMERA_H
#define CAMERA_H

#include "../Student/student.h"
#include <vector>
#include <memory> 
#include <iostream>


class Camera {
private:
    int roomNumber;
    int capacity;
    std::vector<std::unique_ptr<Student>> students; 
public:
    // Constructor
    Camera(int roomNumber, int capacity);

    // Copy Constructor
    Camera(const Camera& other);

    // Move Constructor
    Camera(Camera&& other) noexcept;

    // Assignment Operator
    Camera& operator=(const Camera& other);

    // Destructor
    virtual ~Camera() ;

    virtual void afiseaza() const;

    // Methods
    bool adaugaStudent(std::unique_ptr<Student> student);
    // Getter pentru roomNumber
    int getRoomNumber() const;

};

#endif // CAMERA_H
