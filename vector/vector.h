#ifndef PROJ_VECTOR_H
#define PROJ_VECTOR_H


#include <vector>
#include <fstream>
#include "../norma/norma.h"

class Vector : public Norma {
private:
    int size = 10;
public:
    std::vector<int> elements;

    Vector();

    Vector(Vector &);

    Vector(int *);

    ~Vector();

    virtual float norma();

    virtual void read(std::ifstream file);

    virtual void write();

    Vector operator=(const Vector &vector);
};


#endif //PROJ_VECTOR_H
