#include <iostream>
#include "firme.h"
#pragma once

using namespace std;

class electronice : public firme
{
    int laptop;
    int telefoane;
    int televizoare;

public:
    electronice();
    electronice( char*, int, int, int, int);
    electronice( const electronice& );
    ~electronice();

    void afisare();
    void getnume();
    int profit();

    void stock();
    void aprovizionare(int,int,int);
    int stock_laptop();
    int stock_telefoane();
    int stock_televizoare();
    void cumpara_laptop();
    void cumpara_telefoane();
    void cumpara_televizoare();
    friend istream& operator>>(istream&, electronice&);
};
