#include "Student/student.h"
#include "Camera/camera.h"
#include <iostream>

int main() {
    Student student1("Alice", 1001, 2);
    Camera camera1(1, 2);

    if (camera1.adaugaStudent(&student1)) {
        std::cout << "Studentul a fost adăugat în cameră.\n";
    } else {
        std::cout << "Camera este plină.\n";
    }

    return 0;
}
