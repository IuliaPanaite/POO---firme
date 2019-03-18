#include <iostream>
#include "firme.h"
#pragma once

using namespace std;

class patiserie : public firme
{
    int cornuri;
    int pateuri;
    int crenvurst_aluat;

public:
    patiserie();
    patiserie( char*, int, int, int, int);
    patiserie( const patiserie& );
    ~patiserie();

    void afisare();
    void getnume();
    int profit();

    void stock();
    void aprovizionare(int,int,int);
    int stock_cornuri();
    int stock_pateuri();
    int stock_crenvurst_aluat();
    void cumpara_cornuri();
    void cumpara_pateuri();
    void cumpara_crenvurst_aluat();
    friend istream& operator>>(istream&, patiserie&);
};
