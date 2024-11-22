#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
    //incapsulare
private:
    std::string name;
    int id;
    int year;

public:
    // Constructor
    Student(const std::string& name, int id, int year);

    // Copy Constructor
    Student(const Student& other);

    // Move Constructor
    Student(Student&& other) noexcept;

    // Assignment Operator
    Student& operator=(const Student& other);

    // Destructor
    ~Student();

    // Getters
    std::string getName() const;
    int getId() const;
    int getYear() const;
};

#endif // STUDENT_H
