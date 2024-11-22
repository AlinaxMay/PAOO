#include "camin.h"

// Constructor
Camin::Camin(const std::string& name) : name(name) {}

// Destructor
Camin::~Camin() {}

// Methods
void Camin::adaugaCamera(Camera&& camera) {
    camere.push_back(std::move(camera)); 
}

Camera* Camin::getCamera(int roomNumber) {
    for (Camera& camera : camere) {
        if (camera.getRoomNumber() == roomNumber) {
            return &camera;
        }
    }
    return nullptr;
}
