#include <iostream>
#include "firmeAbs.h"
#pragma once

using namespace std;

class firme : public firmeAbs
{
protected:

    char* numefirma;
    int angajati;

private:
    int nr_magazine;
    char* *maga; //electronice, mancare, bijuterii

public:
    firme();//constructor fara parametrii
    firme( char*, int, int, char** );//constructor cu parametrii
    firme(char*, int);//constructor cu parametrii pt clase derivate
    firme( const firme& );

    ~firme();

    void getnume();
    void afisare();
    virtual int profit(){return 0;}

    friend istream& operator>>(istream&, firme&);

};
