#include "camin.h"

// Constructor
Camin::Camin(const std::string& name) : name(name) {
     std::cout << "Obiectul " << name << " a fost creat." << std::endl;
}

// Destructor
Camin::~Camin() {}

// Methods

void Camin::adaugaCamera(std::shared_ptr<Camera> camera) { //smart shared pointer 
    camere.push_back(std::move(camera)); // Add shared_ptr to the vector
}

// std::shared_ptr<Camera> getCamera(int roomNumber) {
//         for (auto& camera : camere) {
//             if (camera->getRoomNumber() == roomNumber) {
//                 return camera;  // Return shared_ptr to the camera
//             }
//         }
//         return nullptr;  // Return nullptr if camera not found
//     }


