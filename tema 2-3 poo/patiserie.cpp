#include <iostream>
#include "patiserie.h"
#include <string.h>

using namespace std;

patiserie::patiserie()
{
    cornuri=0;
    pateuri=0;
    crenvurst_aluat=0;
}

patiserie::patiserie(char*n, int a, int c, int p, int ca):firme(n,a)
{
    cornuri=c;
    pateuri=p;
    crenvurst_aluat=ca;
}

patiserie::patiserie( const patiserie &e):firme(e)
{
    cornuri=e.cornuri;
    pateuri=e.pateuri;
    crenvurst_aluat=e.crenvurst_aluat;
}

patiserie::~patiserie()
{

}

void patiserie::afisare()
{
    firme::afisare();
    cout<<"\nNumarul de cornuri: "<<cornuri;
    cout<<"\nNumarul de pateuri: "<<pateuri;
    cout<<"\nNumarul de crenvurst_aluat: "<<crenvurst_aluat<<endl;
}

void patiserie::getnume()
{
    firme::getnume();
}

void patiserie::aprovizionare(int a, int b, int c)
{
    this->cornuri += a;
    this->pateuri += b;
    this->crenvurst_aluat += c;
}

void patiserie::stock()
{
    int s;
    s=cornuri+pateuri+crenvurst_aluat;
    cout<<"Magazinul "<<numefirma<<" mai are "<<s<<" produse pe stock"<<endl;
}

int patiserie::profit()
{
    int pret_cornuri;
    int pret_pateuri;
    int pret_crenvurst_aluat;
    int plata;
    int total;

    cout<<"Fiecare corn costa (intre 350 si 60): ";
    cin>>pret_cornuri;
    cout<<"Suta de grame de pateuri costa (intre 60 si 100): ";
    cin>>pret_pateuri;
    cout<<"Fiecare crenvurst in aluat costa (intre 30 si 50): ";
    cin>>pret_crenvurst_aluat;

    cout<<"Fiecare angajat e platit cu (intre 200 si 300) ";
    cin>>plata;

    total = pret_cornuri * cornuri + pret_pateuri * pateuri + pret_crenvurst_aluat * crenvurst_aluat - plata * angajati;
    return total;

}

int patiserie::stock_cornuri()
{
    if(cornuri)
        return 1;
    return 0;
}

int patiserie::stock_pateuri()
{
    if(pateuri)
        return 1;
    return 0;
}

int patiserie::stock_crenvurst_aluat()
{
    if(crenvurst_aluat)
        return 1;
    return 0;
}

void patiserie::cumpara_cornuri()
{
    cornuri--;
    cout<<"Multumim ca ati cumpart de la noi. O zi buna"<<endl;
}

void patiserie::cumpara_pateuri()
{
    pateuri--;
    cout<<"Multumim ca ati cumpart de la noi. O zi buna"<<endl;
}

void patiserie::cumpara_crenvurst_aluat()
{
    crenvurst_aluat--;
    cout<<"Multumim ca ati cumpart de la noi. O zi buna"<<endl;
}

istream& operator>> (istream& in, patiserie& x)
{
    try
    {
        cout<<"Nume: \n";
        in>>x.numefirma;

        cout<<"Numarul angajatilor: \n";
        in>>x.angajati;

        cout<<"Numarul de cornuri: \n";
        in>>x.cornuri;

        cout<<"Numarul de pateuri: \n";
        in>>x.pateuri;

        cout<<"Numarul de crenvurst_aluat: \n";
        in>>x.crenvurst_aluat;
    }
    catch(bad_alloc& e)
    {
        cout<<"Memorie insuficienta!";
    }

    return in;
}

