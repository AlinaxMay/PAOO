#include "Student.h"

// Constructor
Student::Student(const std::string& name, int id, int year)
    : name(name), id(id), year(year) {}

// Copy Constructor
Student::Student(const Student& other)
    : name(other.name), id(other.id), year(other.year) {}

// Assignment Operator
Student& Student::operator=(const Student& other) {
    if (this != &other) { // Prevent self-assignment
        name = other.name;
        id = other.id;
        year = other.year;
    }
    return *this;
}

// Destructor
Student::~Student() {}

// Getters
std::string Student::getName() const { return name; }
int Student::getId() const { return id; }
int Student::getYear() const { return year; }
