#include "Student/student.h"
#include "Camera/camera.h"
#include "Camera/CameraLux.h"
#include "Camin/camin.h"
#include <iostream>
#include <memory> // Include for unique_ptr



int main() {
    Camin camin("Camin Studentesc");

    std::shared_ptr<Camera> camera1 = std::make_shared<Camera>(1, 2);
    std::shared_ptr<Camera> camera2 = std::make_shared<Camera>(2, 2);
    std::shared_ptr<Camera> cameraLux = std::make_shared<CameraDeLux>(201, 3, true, "Modern");
    //std::shared_ptr<Camera> camera2 = std::make_shared<Camera>(1, 2); //shared pointers
    //copy constr demonstrat

 
    //move constr
    camin.adaugaCamera(std::move(camera1));
    camin.adaugaCamera(std::move(camera2));
    camin.adaugaCamera(std::move(cameraLux));


    auto student1 = std::make_unique<Student>("Alina", 1000, 2); //smart unic pointer 
    auto student2 = std::make_unique<Student>("Maria", 1001, 1);

    // std::shared_ptr<Camera> cam = camin.getCamera(1); 
    // if (cam && cam->adaugaStudent(std::move(student1))) {
    //     std::cout << "Alina a fost adaugat in camera 1.\n";
    // }

    // if (cam && cam->adaugaStudent(std::move(student2))) {
    //     std::cout << "Maria a fost adaugat in camera 1.\n";
    // }

    return 0;
}

