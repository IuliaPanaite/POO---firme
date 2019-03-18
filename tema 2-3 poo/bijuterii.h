#include <iostream>
#include "firme.h"
#pragma once


using namespace std;

class bijuterii : public firme
{
    int cercei;
    int coliere;
    int inele;
public:
    bijuterii();
    bijuterii( char*, int, int, int, int);
    bijuterii( const bijuterii& );
    ~bijuterii();

    void afisare();
    void getnume();
    int profit();

    void stock();
    void aprovizionare(int,int,int);
    int stock_cercei();
    int stock_coliere();
    int stock_inele();
    void cumpara_cercei();
    void cumpara_coliere();
    void cumpara_inele();
    friend istream& operator>>(istream&, bijuterii&);
};
