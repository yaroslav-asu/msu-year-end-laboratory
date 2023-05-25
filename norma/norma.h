#ifndef ЗАЧЕТ_CLASS_H
#define ЗАЧЕТ_CLASS_H


class Norma {
public:
    Norma();

    Norma(Norma &);

    Norma(int ...);

    ~Norma();

    virtual float norma();

    virtual void read();

    virtual void write();

    Norma operator=(const Norma &norma);
};


#endif
