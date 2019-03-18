#include <iostream>
#include "firme.h"
#include <cstring>
#include <new>

using namespace std;

firme::firme()//fara parametrii
{
    numefirma=new char[20];
    strcpy(numefirma,"Necunoscuta");
    angajati=0;
    nr_magazine=0;
    maga=new char*[nr_magazine+1];
    for(int i=0; i<nr_magazine+2; i++)
        maga[i]=new char[20];
    strcpy(maga[0],"NoName");
}

firme::firme(char *n,int a,int nr,char * *m)//cu parametrii
{
    numefirma=new char[strlen(n)+1];
    strcpy(numefirma,n);
    angajati=a;
    nr_magazine=nr;
    maga=new char*[nr_magazine+1];
    for(int i=0; i<nr_magazine; i++)
    {
        maga[i]=new char[strlen(m[i])+1];
        strcpy(maga[i],m[i]);
        maga[i][strlen(m[i])+1]='\0';
    }

}

firme::firme(char *n,int a)//pt clase derivate
{
    numefirma=new char[strlen(n)+1];
    strcpy(numefirma,n);
    angajati=a;
}

firme::firme( const firme &f)//constructor de copiere
{
    numefirma=new char[strlen(f.numefirma)+1];
    strcpy(numefirma,f.numefirma);
    angajati=f.angajati;
    nr_magazine=f.nr_magazine;
    maga=new char*[nr_magazine];

    for(int i=0; i<f.nr_magazine; i++)
    {
        maga[i]=new char[20];
        strcpy(maga[i],f.maga[i]);
    }
}

firme::~firme()
{


}

void firme::getnume()
{
    cout<<"Nume: "<<numefirma<<endl;
}




void firme::afisare()
{
    cout<<"Nume: "<<numefirma<<endl;
    cout<<"Numarul de angajati: "<<angajati<<endl;
    cout<<"Numarul de magazine: "<<nr_magazine<<endl;
    for(int i=0; i<nr_magazine; i++)
        cout<<"Magazinul "<<i+1<<": "<<maga[i]<<endl;
}

istream& operator>> (istream& in, firme& x)
{
    try
    {
        cout<<"Nume: \n";
        in>>x.numefirma;

        cout<<"Numarul angajatilor: \n";
        in>>x.angajati;

        cout<<"Numarul de magazine: \n";
        in>>x.nr_magazine;
        while(x.nr_magazine<0 || x.nr_magazine>2)
        {
            cout<<"O firma poate avea maxim 2 magazine"<<endl;
            in>>x.nr_magazine;
        }

        x.maga=new char*[x.nr_magazine+1];

        cout<<"Introduceti cele "<<x.nr_magazine<<" magazine (electronice, patiserie, bijuterii): \n";

        for(int i=0; i<x.nr_magazine; i++)
        {
            x.maga[i]=new char[20];
            in>>x.maga[i];//electronice,mancare,bijuterii
            while(strcmp(x.maga[i],"electronice")!=0 && strcmp(x.maga[i],"patiserie")!=0 && strcmp(x.maga[i],"bijuterii")!=0)
            {
                cout<<"Exista doar magazine de electronice, bijuterii si patiserii, alegeti una din ele.\n";
                in>>x.maga[i];
            }
        }
    }
    catch(bad_alloc& e)
    {
        cout<<"Memorie insuficienta!";
    }
    return in;
}

