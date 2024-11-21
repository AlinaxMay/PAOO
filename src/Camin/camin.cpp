#include "camin.h"

// Constructor
Camin::Camin(const std::string& name) : name(name) {}

// Destructor
Camin::~Camin() {}

// Methods
void Camin::adaugaCamera(const Camera& camera) {
    camere.push_back(camera);
}

Camera* Camin::getCamera(int roomNumber) {
    for (Camera& camera : camere) {
        if (camera.getRoomNumber() == roomNumber) {
            return &camera;
        }
    }
    return nullptr;
}
