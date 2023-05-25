#include <vector>
#include "norma/norma.h"
#include "complex/complex.h"
#include "vector/vector.h"
#include "matrix/matrix.h"

enum {
    COMPLEX, VECTOR, MATRIX
};

int main() {
    std::vector<Norma*> baseElements{new Complex, new Vector, new Matrix};
    std::vector<unsigned short> elementsDirection{COMPLEX, COMPLEX, VECTOR, MATRIX, VECTOR};
    std::vector<Norma*> elements;
    unsigned int elementsCount = 5;
    for (int i = 0; i < elementsCount; i++) {
        baseElements[i]->read();
        Norma tmp = *baseElements[i];
        elements.push_back(&tmp);
    }

    float sum = 0;
    for (int i = 0; i < elementsCount; ++i) {
        sum += elements[i]->norma();
        elements[i]->write();
    }
    return 0;
}
