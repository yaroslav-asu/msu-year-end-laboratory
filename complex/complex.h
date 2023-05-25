#ifndef ЗАЧЕТ_KOMPLEX_H
#define ЗАЧЕТ_KOMPLEX_H


#include "../norma/norma.h"

class Complex : public Norma {
public:
    int a, b;

    Complex();

    Complex(Complex &);

    Complex(int, int);

    ~Complex();

    virtual float norma();

    virtual void read(std::ifstream);

    virtual void write();

    Complex operator=(const Complex &norma);
};


#endif