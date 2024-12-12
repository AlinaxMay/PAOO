#ifndef CAMIN_H
#define CAMIN_H

#include "../Camera/camera.h"
#include <vector>

class Camin {
    //incapsulare
private:
    std::string name;
    std::vector<std::shared_ptr<Camera>> camere;  //camere as shared pointers

public:
    // Constructor
    Camin(const std::string& name);

    // Destructor
    ~Camin();

    // Methods
    void adaugaCamera(std::shared_ptr<Camera> camera);


    std::shared_ptr<Camera> getCamera(int roomNumber);
};

#endif // CAMIN_H
