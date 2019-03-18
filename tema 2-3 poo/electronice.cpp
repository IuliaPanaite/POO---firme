#include <iostream>
#include "electronice.h"
#include <string.h>

using namespace std;

electronice::electronice()
{
    laptop=0;
    telefoane=0;
    televizoare=0;
}

electronice::electronice(char*n, int a, int lap, int tel, int tv):firme(n,a)
{
    laptop=lap;
    telefoane=tel;
    televizoare=tv;
}

electronice::electronice( const electronice &e):firme(e)
{
    laptop=e.laptop;
    telefoane=e.telefoane;
    televizoare=e.televizoare;
}

electronice::~electronice()
{

}

void electronice::afisare()
{
    firme::afisare();
    cout<<"\nNumarul de laptopuri: "<<laptop;
    cout<<"\nNumarul de telefoane: "<<telefoane;
    cout<<"\nNumarul de televizoare: "<<televizoare<<endl;
}

void electronice::getnume()
{
    firme::getnume();
}

void electronice::stock()
{
    int s;
    s=laptop+telefoane+televizoare;
    cout<<"Magazinul "<<numefirma<<" mai are "<<s<<" produse pe stock"<<endl;
}

void electronice::aprovizionare(int a, int b, int c)
{
    this->laptop += a;
    this->telefoane += b;
    this->televizoare += c;
}

int electronice::profit()
{
    int pret_laptop;
    int pret_telefoane;
    int pret_televizoare;
    int plata;
    int total;

    cout<<"Fiecare laptop costa (intre 500 si 1000): ";
    cin>>pret_laptop;
    cout<<"Fiecare telefon costa(intre 200 si 600): ";
    cin>>pret_telefoane;
    cout<<"Fiecare televizor costa(intre 400 si 1500): ";
    cin>>pret_televizoare;

    cout<<"Fiecare angajat e platit cu(intre 300 si 700) ";
    cin>>plata;

    total = pret_laptop * laptop + pret_telefoane * telefoane + pret_televizoare * televizoare - plata * angajati;
    return total;

}

int electronice::stock_laptop()
{
    if(laptop)
        return 1;
    return 0;
}

int electronice::stock_telefoane()
{
    if(telefoane)
        return 1;
    return 0;
}

int electronice::stock_televizoare()
{
    if(televizoare)
        return 1;
    return 0;
}

void electronice::cumpara_laptop()
{
    laptop--;
    cout<<"Multumim ca ati cumpart de la noi. O zi buna"<<endl;
}

void electronice::cumpara_telefoane()
{
    telefoane--;
    cout<<"Multumim ca ati cumpart de la noi. O zi buna"<<endl;
}

void electronice::cumpara_televizoare()
{
    televizoare--;
    cout<<"Multumim ca ati cumpart de la noi. O zi buna"<<endl;
}

istream& operator>> (istream& in, electronice& x)
{
    try
    {
        cout<<"Nume: \n";
        in>>x.numefirma;

        cout<<"Numarul angajatilor: \n";
        in>>x.angajati;

        cout<<"Numarul de laptop-uri: \n";
        in>>x.laptop;

        cout<<"Numarul de telefoane: \n";
        in>>x.telefoane;

        cout<<"Numarul de televizoare: \n";
        in>>x.televizoare;
    }
    catch(bad_alloc& e)
    {
        cout<<"Memorie insuficienta!";
    }

    return in;
}

