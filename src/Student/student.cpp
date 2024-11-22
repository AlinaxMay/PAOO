#include "student.h"
#include <iostream>

//  inițializarea membrilor din constructor
Student::Student(const std::string& name, int id, int year)
    : name(name), id(id), year(year) {}

// Copy Constructor
Student::Student(const Student& other)
    : name(other.name), id(other.id), year(other.year) {}

// Move constructor
Student::Student(Student&& other) noexcept 
    : name(std::move(other.name)), id(other.id), year(other.year) {
    std::cout << "Move constructor pt student: " << name << "\n";
}

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
Student::~Student() {
    std::cout << "Apelat destructor student: " << name << "\n";
}

// Getters
std::string Student::getName() const { return name; }
int Student::getId() const { return id; }
int Student::getYear() const { return year; }
