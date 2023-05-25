#ifndef PROJ_MATRIX_H
#define PROJ_MATRIX_H


#include "../norma/norma.h"

class Matrix : public Norma {
private:
    unsigned int height;
    unsigned int width;

public:
    int **elements;

    Matrix();

    Matrix(Matrix &);

    Matrix(int **);

    ~Matrix();

    virtual float norma();

    virtual void read(std::ifstream);

    virtual void write();

    Matrix operator=(const Matrix &);
};


#endif //PROJ_MATRIX_H
