#ifndef CAMERA_DELUX_H
#define CAMERA_DELUX_H

#include "camera.h"
#include <string>
#include <iostream>

class CameraDeLux : public Camera {
private:
    bool areTV;
    std::string tipMobilier;

public:
    // Constructor
    CameraDeLux(int roomNumber, int capacity, bool areTV, const std::string& tipMobilier)
        : Camera(roomNumber, capacity), areTV(areTV), tipMobilier(tipMobilier) {
        std::cout << "Obiectul derivar camera de lux " << roomNumber << " a fost creat.\n";
    }

    // Destructor
    ~CameraDeLux() override {
        std::cout << "Destructorul pentru Camera de lux " << getRoomNumber() << " a fost apelat.\n";
    }

    // Suprascriere metodă pentru afișare
    void afiseaza() const override {
        Camera::afiseaza();
        std::cout << "Tip mobilier: " << tipMobilier 
                  << ", tv: " << (areTV ? "Da" : "Nu") << "\n";
    }
};

#endif // CAMERA_DELUX_H
