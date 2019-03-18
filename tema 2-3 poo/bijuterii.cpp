#include <iostream>
#include "bijuterii.h"
#include <string.h>

using namespace std;

bijuterii::bijuterii()
{
    cercei=0;
    coliere=0;
    inele=0;
}

bijuterii::bijuterii( char*n, int a, int cr, int cl, int i ):firme( n, a )
{
    cercei=cr;
    coliere=cl;
    inele=i;
}

bijuterii::bijuterii( const bijuterii &e ):firme( e )
{
    cercei=e.cercei;
    coliere=e.coliere;
    inele=e.inele;
}

bijuterii::~bijuterii()
{

}

void bijuterii::afisare()
{
    firme::afisare();
    cout<<"\nNumarul de cercei: "<<cercei;
    cout<<"\nNumarul de coliere: "<<coliere;
    cout<<"\nNumarul de inele: "<<inele<<endl;
}

void bijuterii::getnume()
{
    firme::getnume();
}

void bijuterii::aprovizionare(int a, int b, int c)
{
    this->cercei += a;
    this->coliere += b;
    this->inele += c;
}

void bijuterii::stock()
{
    int s;
    s=cercei+coliere+inele;
    cout<<"Magazinul "<<numefirma<<" mai are "<<s<<" produse pe stock"<<endl;
}

int bijuterii::profit()
{
    int pret_cercei;
    int pret_coliere;
    int pret_inele;
    int plata;
    int total;

    cout<<"Cerceii costa (intre 300 si 750): ";
    cin>>pret_cercei;
    cout<<"Fiecare colier costa (intre 500 si 1500): ";
    cin>>pret_coliere;
    cout<<"Fiecare inel costa (intre 400 si 1000): ";
    cin>>pret_inele;

    cout<<"Fiecare angajat e platit cu (intre 500 si 1000) ";
    cin>>plata;

    total = pret_cercei * cercei + pret_coliere * coliere + pret_inele * inele - plata * angajati;
    return total;

}

int bijuterii::stock_cercei()
{
    if(cercei)
        return 1;
    return 0;
}

int bijuterii::stock_coliere()
{
    if(coliere)
        return 1;
    return 0;
}

int bijuterii::stock_inele()
{
    if(inele)
        return 1;
    return 0;
}

void bijuterii::cumpara_cercei()
{
    cercei--;
    cout<<"Multumim ca ati cumpart de la noi. O zi buna"<<endl;
}

void bijuterii::cumpara_coliere()
{
    coliere--;
    cout<<"Multumim ca ati cumpart de la noi. O zi buna"<<endl;
}

void bijuterii::cumpara_inele()
{
    inele--;
    cout<<"Multumim ca ati cumpart de la noi. O zi buna"<<endl;
}

istream& operator>> (istream& in, bijuterii& x)
{
    try
    {
        cout<<"Nume: \n";
        in>>x.numefirma;

        cout<<"Numarul angajatilor: \n";
        in>>x.angajati;

        cout<<"Numarul de cercei: \n";
        in>>x.cercei;

        cout<<"Numarul de coliere: \n";
        in>>x.coliere;

        cout<<"Numarul de inele: \n";
        in>>x.inele;
    }
    catch(bad_alloc& e)
    {
        cout<<"Memorie insuficienta!";
    }

    return in;
}

