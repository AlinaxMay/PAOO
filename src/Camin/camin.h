#ifndef CAMIN_H
#define CAMIN_H

#include "../Camera/camera.h"
#include <vector>

class Camin {
    //incapsulare
private:
    std::string name;
    std::vector<Camera> camere;

public:
    // Constructor
    Camin(const std::string& name);

    // Destructor
    ~Camin();

    // Methods
    void adaugaCamera(Camera&& camera);


    Camera* getCamera(int roomNumber);
};

#endif // CAMIN_H
