#include <iostream>
#include <cstring>
#include "interogare.h"

using namespace std;

int main()
{

    //1305 linii de cooood :ooo

    char* *s=new char*[2];
    for (int i=0; i<2; i++)
    {
        s[i]=new char[20];
        s[i][0]='\0';
    }
    strcpy(s[0],"electronice");
    strcpy(s[1],"bijuterii");

    firme f1,f2("Jupiter",100,2,s),f3(f1);
    electronice e1, e2("Flanco",50,30,25,10),e3(e1);
    patiserie p1, p2("Panda",10,30,20,15),p3(p1);
    bijuterii b1,b2("Lux",20,10,40,30);


    interogare<firme>f(0);
    interogare<electronice>e(0);
    interogare<patiserie>p(0);
    interogare<bijuterii>b(0);
    int x,y,z;
    int a;
    int m,n,t;

    cout<<"1.Firme"<<endl<<"2.Magazine"<<endl<<"3.Inspector"<<endl<<"4.Client"<<endl<<"0.Exit"<<endl;
    cin>>x;
    while(x)
    {
        switch(x)
        {
        case 1:
            cout<<"1.Adauga firma"<<endl<<"2.Sterge firma"<<endl<<"0.Exit"<<endl;
            cin>>y;
            while(y)
            {
                switch(y)
                {
                case 1:
                    cout<<"Introduceti firma"<<endl;
                    cin>>f1;
                    f.adauga(f1);
                    break;
                case 2:
                    cout<<"A cata firma vreti sa o stergeti?"<<endl;
                    cin>>a;
                    f.sterge(a);
                }
                cout<<"1.Adauga firma"<<endl<<"2.Sterge firma"<<endl<<"0.Exit"<<endl;
                cin>>y;
            }
            break;
        case 2:
            cout<<"1.Magazin de electronice"<<endl<<"2.Patiserie"<<endl<<"3.Magazin de bijuterii"<<endl<<"0.Exit"<<endl;
            cin>>y;
            while(y)
            {
                switch(y)
                {
                case 1:
                    cout<<"1.Adauga magazin"<<endl<<"2.Sterge magazin"<<endl<<"3.Achizitionare magazin"<<endl<<"4.Verificare stock"<<endl<<"0.Exit"<<endl;
                    cin>>z;
                    while(z)
                    {
                        switch(z)
                        {
                        case 1:
                            cout<<"Introduceti magazinul de electronice: "<<endl;
                            cin>>e1;
                            e.adauga(e1);
                            break;
                        case 2:
                            cout<<"Ce magazin doriti sa stergeti?"<<endl;
                            cin>>a;
                            e.sterge(a);
                            break;
                        case 3:
                            cout<<"Carui magazin doriti sa ii faceti achizitionarea?"<<endl;
                            cin>>a;
                            cout<<"Cu cate laptop-uri, telefoane si televizoare achizitionati magazinul?"<<endl;

                            cin>>m>>n>>t;
                            e.aprovizionare_magazin(a,m,n,t);
                            break;
                        case 4:
                            cout<<"Carui magazin doriti sa ii verificati stock-ul?"<<endl;
                            cin>>a;
                            e.stock(a);
                        }
                        cout<<"1.Adauga magazin"<<endl<<"2.Sterge magazin"<<endl<<"3.Achizitionare magazin"<<endl<<"4.Verificare stock"<<endl<<"0.Exit"<<endl;
                        cin>>z;
                    }
                    break;
                case 2:
                    cout<<"1.Adauga magazin"<<endl<<"2.Sterge magazin"<<endl<<"3.Achizitionare magazin"<<endl<<"4.Verificare stock"<<endl<<"0.Exit"<<endl;
                    cin>>z;
                    while(z)
                    {
                        switch(z)
                        {
                        case 1:
                            cout<<"Introduceti patiseria: "<<endl;
                            cin>>p1;
                            p.adauga(p1);
                            break;
                        case 2:
                            cout<<"Ce magazin doriti sa stergeti?"<<endl;
                            cin>>a;
                            p.sterge(a);
                            break;
                        case 3:
                            cout<<"Carui magazin doriti sa ii faceti achizitionarea?"<<endl;
                            cin>>a;
                            cout<<"Cu cate cornuri,pateuri si crenvursti in aluat achizitionati magazinul?"<<endl;

                            cin>>m>>n>>t;
                            p.aprovizionare_magazin(a,m,n,t);
                            break;
                        case 4:
                            cout<<"Carui magazin doriti sa ii verificati stock-ul?"<<endl;
                            cin>>a;
                            p.stock(a);
                        }
                        cout<<"1.Adauga magazin"<<endl<<"2.Sterge magazin"<<endl<<"3.Achizitionare magazin"<<endl<<"4.Verificare stock"<<endl<<"0.Exit"<<endl;
                        cin>>z;
                    }
                    break;
                case 3:
                    cout<<"1.Adauga magazin"<<endl<<"2.Sterge magazin"<<endl<<"3.Achizitionare magazin"<<endl<<"4.Verificare stock"<<endl<<"0.Exit"<<endl;
                    cin>>z;
                    while(z)
                    {
                        switch(z)
                        {
                        case 1:
                            cout<<"Introduceti magazinul de bijuterii: "<<endl;
                            cin>>b1;
                            b.adauga(b1);
                            break;
                        case 2:
                            cout<<"Ce magazin doriti sa stergeti?"<<endl;
                            cin>>a;
                            b.sterge(a);
                            break;
                        case 3:
                            cout<<"Carui magazin doriti sa ii faceti achizitionarea?"<<endl;
                            cin>>a;
                            cout<<"Cu cate cornuri,pateuri si crenvursti in aluat achizitionati magazinul?"<<endl;
                            int m,n,t;
                            cin>>m>>n>>t;
                            b.aprovizionare_magazin(a,m,n,t);
                            break;
                        case 4:
                            cout<<"Carui magazin doriti sa ii verificati stock-ul?"<<endl;
                            cin>>a;
                            b.stock(a);
                        }
                        cout<<"1.Adauga magazin"<<endl<<"2.Sterge magazin"<<endl<<"3.Achizitionare magazin"<<endl<<"4.Verificare stock"<<endl<<"0.Exit"<<endl;
                        cin>>z;
                    }
                }
                cout<<"1.Magazin de electronice"<<endl<<"2.Patiserie"<<endl<<"3.Magazin de bijuterii"<<endl<<"0.Exit"<<endl;
                cin>>y;
            }
            break;
        case 3:
            cout<<"1.Firma"<<endl<<"2.Magazin de electronice"<<endl<<"3.Patiserie"<<endl<<"4.Magazinul de bijuterii"<<endl<<"0.Exit"<<endl;
            cin>>y;
            while(y)
            {
                switch(y)
                {
                case 1:
                    cout<<"1.Afisare lista firme"<<endl<<"0.Exit"<<endl;
                    cin>>z;
                    while(z)
                    {
                        f.afisarelista();
                        cout<<"1.Afisare lista firme"<<endl<<"0.Exit"<<endl;
                        cin>>z;
                    }
                    break;
                case 2:
                    cout<<"1.Afisare magazine de electronice"<<endl<<"2.Profit"<<endl<<"0.Exit"<<endl;
                    cin>>z;
                    while(z)
                    {
                        switch(z)
                        {
                        case 1:
                            e.afisarelista();
                            break;
                        case 2:
                            cout<<"Pentru care magazin vreti sa se afiseze proftul?"<<endl;
                            cin>>a;
                            e.profitul(a);

                        }
                        cout<<"1.Afisare magazine de electronice"<<endl<<"2.Profit"<<endl<<"0.Exit"<<endl;
                        cin>>z;
                    }
                    break;
                case 3:
                    cout<<"1.Afisare patiserii"<<endl<<"2.Profit"<<endl<<"0.Exit"<<endl;
                    cin>>z;
                    while(z)
                    {
                        switch(z)
                        {
                        case 1:
                            p.afisarelista();
                            break;
                        case 2:
                            cout<<"Pentru care magazin vreti sa se afiseze proftul?"<<endl;
                            cin>>a;
                            p.profitul(a);

                        }
                        cout<<"1.Afisare patiserii"<<endl<<"2.Profit"<<endl<<"0.Exit"<<endl;
                        cin>>z;
                    }
                    break;
                case 4:
                    cout<<"1.Afisare magazine de bijuterii"<<endl<<"2.Profit"<<endl<<"0.Exit"<<endl;
                    cin>>z;
                    while(z)
                    {
                        switch(z)
                        {
                        case 1:
                            b.afisarelista();
                            break;
                        case 2:
                            cout<<"Pentru care magazin vreti sa se afiseze proftul?"<<endl;
                            cin>>a;
                            b.profitul(a);

                        }
                        cout<<"1.Afisare magazine de bijuterii"<<endl<<"2.Profit"<<endl<<"0.Exit"<<endl;
                        cin>>z;
                    }
                }
                cout<<"1.Firma"<<endl<<"2.Magazin de electronice"<<endl<<"3.Patiserie"<<endl<<"4.Magazinul de bijuterii"<<endl<<"0.Exit"<<endl;
                cin>>y;
            }
            break;
        case 4:
            cout<<"1.Firma"<<endl<<"2.Magazin de electronice"<<endl<<"3.Patiserie"<<endl<<"4.Magazin de bijuterii"<<endl<<"0.Exit"<<endl;
            cin>>y;
            while(y)
            {
                switch(y)
                {
                case 1:
                    cout<<"Alegeti unul din produsele de mai jos si se va afisa lista cu magazinele care le au pe stock"<<endl<<"1.Laptop"<<endl<<"2.Telefon"<<endl<<"3.Televizor"<<endl<<"4.Cornuri"<<endl<<"5.Pateuri"<<endl<<"6.Crenvurst in aluat"<<endl<<"7.Cercei"<<endl<<"8.Coliere"<<endl<<"9.Inele"<<endl<<"0.Exit"<<endl;
                    cin>>z;
                    while(z)
                    {
                        switch(z)
                        {
                        case 1:
                            e.findlaptop();
                            break;
                        case 2:
                            e.findtelefoane();
                            break;
                        case 3:
                            e.findtelevizoare();
                            break;
                        case 4:
                            p.findcornuri();
                            break;
                        case 5:
                            p.findpateuri();
                            break;
                        case 6:
                            p.findcrenvurst_aluat();
                            break;
                        case 7:
                            b.findcercei();
                            break;
                        case 8:
                            b.findcoliere();
                            break;
                        case 9:
                            b.findinele();

                        }
                        cout<<"Alegeti unul din produsele de mai jos si se va afisa lista cu magazinele care le au pe stock"<<endl<<"1.Laptop"<<endl<<"2.Telefon"<<endl<<"3.Televizor"<<endl<<"4.Cornuri"<<endl<<"5.Pateuri"<<endl<<"6.Crenvurst in aluat"<<endl<<"7.Cercei"<<endl<<"8.Coliere"<<endl<<"9.Inele"<<endl<<"0.Exit"<<endl;
                        cin>>z;
                    }
                    break;
                case 2:
                    cout<<"De la care magazin doriti sa cumparati?";
                    cin>>a;
                    cout<<"Ce doriti sa cumparati?"<<endl<<"1.Laptop"<<endl<<"2.Telefon"<<endl<<"3.Televizor"<<endl;
                    cin>>m;
                    e.cumpara_electronice(a,m);
                    break;
                case 3:
                    cout<<"De la care magazin doriti sa cumparati?";
                    cin>>a;
                    cout<<"Ce doriti sa cumparati?"<<endl<<"4.Cornuri"<<endl<<"5.Pateuri"<<endl<<"6.Crenvurst in aluat"<<endl;
                    cin>>m;
                    p.cumpara_patiserie(a,m);
                    break;
                case 4:
                    cout<<"De la care magazin doriti sa cumparati?";
                    cin>>a;
                    cout<<"Ce doriti sa cumparati?"<<endl<<"7.Cercei"<<endl<<"8.Coliere"<<endl<<"9.Inele"<<endl;
                    cin>>m;
                    b.cumpara_bijuterii(a,m);

                }
                cout<<"1.Firma"<<endl<<"2.Magazin de electronice"<<endl<<"3.Patiserie"<<endl<<"4.Magazin de bijuterii"<<endl<<"0.Exit"<<endl;
                cin>>y;
            }

        }
        cout<<"1.Firme"<<endl<<"2.Magazine"<<endl<<"3.Inspector"<<endl<<"4.Client"<<endl<<"0.Exit"<<endl;
        cin>>x;
    }
    return 0;
}
