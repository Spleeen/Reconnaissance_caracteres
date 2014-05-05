/*
*   Created by N.Richard
*   Date de création : 5 mai 2014
*   Date de version : 5 mai 2014
*   Version 0.1
*   Principe : Bibliothèque simple pour la gestion de matrices
*/

#ifndef MATRIXI_H
#define MATRIXI_H

class Matrixi {

public:
    //Constructors
    Matrixi(unsigned int nbrows, unsigned int nbcolumns, bool clear = true);

    //Operators override
    Matrixi& operator= (const Matrixi &mat1); 
    bool operator== (const Matrixi& mat);
    bool operator!= (const Matrixi& mat);
    int& operator() (unsigned int nbrows, unsigned int nbcolumns);
    int  operator() (unsigned int nbrows, unsigned int nbcolumns) const;

    //Matrix transpose
    Matrixi transpose();

    //Matrix addition
    Matrixi add(const Matrixi& mat);

    //Matrix multiplication
    Matrixi mult(const Matrixi& mat);

    Matrixi toIdMatrix();

    //Getters & Setters
    int getValue(const unsigned int i, const unsigned int j);
    void setValue(const unsigned int i, const unsigned int j, int value);
    int at(unsigned int i, unsigned int j);
    unsigned int getNbRows();
    unsigned int getNbCols();

    //Matrix display
    void show(int coutwidth = 8);
    //Destructor
    ~Matrixi();

private:
    unsigned int _rows, _cols;
    int* _values;
};

#endif //MATRIXI_H