#include "camin.h"

// Constructor
Camin::Camin(const std::string& name) : name(name) {
     std::cout << "Obiectul " << name << " a fost creat." << std::endl;
}

// Destructor
Camin::~Camin() {}

// Methods
void Camin::adaugaCamera(Camera&& camera) {
    camere.push_back(std::move(camera)); 
}

void adaugaCamera(std::unique_ptr<Camera> camera) {
    camera->afiseaza();
}



Camera* Camin::getCamera(int roomNumber) {
    for (Camera& camera : camere) {
        if (camera.getRoomNumber() == roomNumber) {
            return &camera;
        }
    }
    return nullptr;
}
