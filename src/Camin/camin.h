#ifndef CAMIN_H
#define CAMIN_H

#include "Camera.h"
#include <vector>

class Camin {
private:
    std::string name;
    std::vector<Camera> camere;

public:
    // Constructor
    Camin(const std::string& name);

    // Destructor
    ~Camin();

    // Methods
    void adaugaCamera(const Camera& camera);
    Camera* getCamera(int roomNumber);
};

#endif // CAMIN_H
