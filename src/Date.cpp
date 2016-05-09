#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int a,int b,int c)
{
    zi=a;
    luna=b;
    an=c;
}

istream& operator>>(istream& in, Date& d)
 {
     int k,ok=0;

     do{
        cout<<endl<<"Introdu luna:"<<endl;
        in>>d.luna;
    }while(d.luna>12);

     cout<<"Introdu ziua:"<<endl;
     if(d.luna==2)
        do
        {
        in >>d.zi;
        }while (d.zi>28);
     else
         do
        {
        in >>d.zi;
        }while (d.zi>31);

    cout<<"Introdu anul: "<<endl;

    do
    {
        k=0;
        in>>d.an;
        while(d.an)
        {
            d.an=d.an/10;
            k++;
        }
        if(k==4) ok=1;
    }while(ok==1);

    return in;
 }
ostream& operator<<(ostream& out,const Date& d)
    {
         out<<endl<<"Data este: "<<d.zi<<"/"<<d.luna<<"/"<<d.an;
         return out;
    }

