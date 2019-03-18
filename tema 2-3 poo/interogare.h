#include <iostream>
#include <string>
#include "electronice.h"
#include "patiserie.h"
#include "bijuterii.h"
#pragma once

using namespace std;

template<class T>
class interogare
{
private:
    T* *lista;
    int nr;
public:
    interogare();
    interogare(int);
    virtual ~interogare();

    void adauga(T);
    void sterge(int);
    void afisarelista();
    void stock(int);
    void aprovizionare_magazin(int,int,int,int);

    void findlaptop();
    void findtelefoane();
    void findtelevizoare();
    void findcornuri();
    void findpateuri();
    void findcrenvurst_aluat();
    void findcercei();
    void findcoliere();
    void findinele();

    void cumpara_electronice(int,int);
    void cumpara_patiserie(int,int);
    void cumpara_bijuterii(int,int);

    void profitul(int);

};

template<class T>
interogare<T>::interogare()
{
    *lista = new T;
    nr = 0;
}

template<class T>
interogare<T>::interogare(int n)
{
    nr = n;
    lista = new T*[n+1];
    for ( int i = 0 ; i < n ; i ++ )
        lista[i] = new T;
}

template<class T>
interogare<T>::~interogare()
{
    for ( int i = 0 ; i < nr ; i ++ )
        delete lista[i];

    delete[] lista;
}

template<class T>
void interogare<T>::adauga(T a)
{
    try
    {
        T* *temp = new T*[nr+1];
        for(int i = 0 ; i < nr ; i++)
            temp[i] = lista[i];

        temp[nr] = new T;
        (*temp[nr]) = a;

        nr++;

        delete[] lista;

        lista = new T*[nr];
        for(int i = 0 ; i < nr ; i++)
            lista[i] = temp[i];


        delete[] temp;

        cout<<"A fost adaugata in lista"<<endl;
        lista[nr-1]->afisare();
    }
    catch(bad_alloc& e)
    {
        cout<<"Memorie insuficienta!";
    }
}

template<class T>
void interogare<T>::sterge(int a)
{
    try
    {
        T* *temp = new T*[nr-1];

        for(int i = 0 ; i < a ; i++)
            temp[i] = lista[i];

        for(int i = a+1 ; i < nr ; i++)
            temp[i-1] = lista[i];

        nr--;

        delete[] lista;

        lista = new T*[nr];


        for(int i = 0 ; i < nr ; i++)
            lista[i] = temp[i];

        delete[] temp;
    }
    catch(bad_alloc& e)
    {
        cout<<"Memorie insuficienta!";
    }
}


template<class T>
void interogare<T>::afisarelista()
{
    cout<<endl;
    for(int i = 0 ; i < nr ; i++)
    {
        cout<<i<<":"<<endl;
        lista[i]->afisare();
        cout<<endl;
    }
}

template<class T>
void interogare<T>::stock(int a)
{
    lista[a]->stock();
}

template<class T>
void interogare<T>::aprovizionare_magazin(int x,int a,int b,int c)
{
    lista[x]->aprovizionare(a,b,c);
}

template<class T>
void interogare<T>::findlaptop()
{
    for(int i=0; i<nr; i++)
        if(lista[i]->stock_laptop())
            lista[i]->getnume();

}

template<class T>
void interogare<T>::findtelefoane()
{
    for(int i=0; i<nr; i++)
        if(lista[i]->stock_telefoane())
            lista[i]->getnume();

}

template<class T>
void interogare<T>::findtelevizoare()
{
    for(int i=0; i<nr; i++)
        if(lista[i]->stock_televizoare())
            lista[i]->getnume();

}

template<class T>
void interogare<T>::findcornuri()
{
    for(int i=0; i<nr; i++)
        if(lista[i]->stock_cornuri())
            lista[i]->getnume();

}

template<class T>
void interogare<T>::findpateuri()
{
    for(int i=0; i<nr; i++)
        if(lista[i]->stock_pateuri())
            lista[i]->getnume();

}

template<class T>
void interogare<T>::findcrenvurst_aluat()
{
    for(int i=0; i<nr; i++)
        if(lista[i]->stock_crenvurst_aluat())
            lista[i]->getnume();

}

template<class T>
void interogare<T>::findcercei()
{
    for(int i=0; i<nr; i++)
        if(lista[i]->stock_cercei())
            lista[i]->getnume();

}

template<class T>
void interogare<T>::findcoliere()
{
    for(int i=0; i<nr; i++)
        if(lista[i]->stock_coliere())
            lista[i]->getnume();

}

template<class T>
void interogare<T>::findinele()
{
    for(int i=0; i<nr; i++)
        if(lista[i]->stock_inele())
            lista[i]->getnume();

}

template<class T>
void interogare<T>::cumpara_electronice(int a, int m)
{
    if(m==1)
        lista[a]->cumpara_laptop();
    else if(m==2)
        lista[a]->cumpara_telefoane();
    else if(m==3)
        lista[a]->cumpara_televizoare();
}

template<class T>
void interogare<T>::cumpara_patiserie(int a, int m)
{
    if(m==4)
        lista[a]->cumpara_cornuri();
    else if(m==5)
        lista[a]->cumpara_pateuri();
    else if(m==6)
        lista[a]->cumpara_crenvurst_aluat();
}

template<class T>
void interogare<T>::cumpara_bijuterii(int a, int m)
{
    if(m==7)
        lista[a]->cumpara_cercei();
    else if(m==8)
        lista[a]->cumpara_coliere();
    else if(m==9)
        lista[a]->cumpara_inele();

}

template<class T>
void interogare<T>::profitul(int a)
{
    cout<<"Profitul magazinului este: "<<lista[a]->profit()<<endl;
}
