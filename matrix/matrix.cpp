#include <cstdlib>
#include <iostream>
#include <fstream>
#include "matrix.h"

Matrix::Matrix() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            this->elements[i][j] = 0;
        }
    }
}
Matrix::Matrix(Matrix &matrix) {
    this->width = matrix.width;
    this->height = matrix.height;
    this->elements = matrix.elements;
}

Matrix::Matrix(int **matrix) {
    this->elements = new int*[height];
    for (int i = 0; i < height; ++i) {
        this->elements[i] = new int[width];
        for (int j = 0; j < width; ++j) {
            this->elements[i][j] = matrix[i][j];
        }
    }
}


float Matrix::norma() {
    int max = -1;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (max == -1 || max < this->elements[i][j]) {
                max = abs(this->elements[i][j]);
            }
        }
    }
    return max;
}

void Matrix::read(std::ifstream file) {
    file >> width >> height;
    this->elements = new int*[height];
    for (int i = 0; i < width; ++i) {
        this->elements[i] = new int[width];
        for (int j = 0; j < height; ++j) {
            file >> this->elements[i][j];
        }
    }
}

void Matrix::write() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << elements[i][j] << std::endl;
        }
        std::cout << std::endl;
    }
}

Matrix Matrix::operator=(const Matrix &matrix) {
    if (this->height == matrix.height && this->width == matrix.width) {
        this->elements = new int*[height];
        for (int i = 0; i < height; ++i) {
            this->elements[i] = new int[width];
            for (int j = 0; j < width; ++j) {
                this->elements[i][j] = matrix.elements[i][j];
            }
        }
    }
    return *this;
}

Matrix::~Matrix() = default;