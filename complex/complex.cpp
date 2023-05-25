#include <complex>
#include <iostream>
#include <fstream>
#include "complex.h"

Complex::Complex() {
    this->a = 0;
    this->b = 0;
}

Complex::Complex(int a, int b) {
    this->a = a;
    this->b = b;
}

Complex::Complex(Complex &complex) {
    this->a = complex.a;
    this->b = complex.b;
};

Complex::~Complex() = default;

float Complex::norma() {
    return std::pow(this->a, 2) + std::pow(this->b, 2);
}

void Complex::read(std::ifstream file) {
    file >> a >> b;
}

void Complex::write() {
    std::cout << a << " + " << b << "i";
}

Complex Complex::operator=(const Complex &norma) {
    this->a = norma.a;
    this->b = norma.b;
    return *this;
}

