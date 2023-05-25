#include <valarray>
#include <cmath>
#include <iostream>
#include "vector.h"

Vector::Vector() {
    this->elements.resize(size);
    for (int i = 0; i < size; i++) {
        this->elements[i] = 0;
    }
}

Vector::Vector(Vector &vector) {
    this->size = vector.size;
    this->elements = vector.elements;
}

Vector::Vector(int *elements) {
    this->elements.resize(size);
    for (int i = 0; i < size; i++) {
        this->elements[i] = elements[i];
    }
}

float Vector::norma() {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += abs(elements[i]);
    }
    return std::sqrt(sum);
}

void Vector::read(std::ifstream file) {
    file >> size;
    for (int i = 0; i < size; ++i) {
        file >> elements[i];
    }
}

void Vector::write() {
    for (int i = 0; i < size; ++i) {
        std::cout << elements[i] << " ";
    }
    std::cout << std::endl;
}

Vector Vector::operator=(const Vector &vector) {
    if (this->size == vector.size) {
        for (int i = 0; i < size; i++) {
            this->elements[i] = vector.elements[i];
        }
    }
    return *this;
}


Vector::~Vector() = default;
