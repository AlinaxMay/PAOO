#include "Student/student.h"
#include "Camera/camera.h"
#include "Camin/camin.h"
#include <iostream>
#include <memory> // Include for unique_ptr



int main() {
    Camin camin("Camin Studentesc");

    Camera camera1(1, 2);
    Camera camera2(2, 3);

 
    camin.adaugaCamera(std::move(camera1));
    camin.adaugaCamera(std::move(camera2));


    auto student1 = std::make_unique<Student>("Alina", 1000, 2);
    auto student2 = std::make_unique<Student>("Maria", 1001, 1);

    // if (camera1.adaugaStudent(std::move(student1))) {
    //     std::cout << "Studentul a fost adaugat in camera.\n";
    // } else {
    //     std::cout << "Camera este plina.\n";
    // }

    // if (camera1.adaugaStudent(std::move(student2))) {
    //     std::cout << "Studentul a fost adaugat in camera.\n";
    // } else {
    //     std::cout << "Camera este plina.\n";
    // }

    Camera* cam = camin.getCamera(1); 
    if (cam && cam->adaugaStudent(std::move(student1))) {
        std::cout << "Alina a fost adaugat in camera 1.\n";
    }

    if (cam && cam->adaugaStudent(std::move(student2))) {
        std::cout << "Maria a fost adaugat in camera 1.\n";
    }

    return 0;
}

