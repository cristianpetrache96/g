#include <iostream>
#include <fstream>
#include "Book.h"

using namespace std;

Book::Book()
{
    Date c();
    titlu="Titlu";
    autor="Autor";
    locatie="A00";
    nr_exemplare=0;
    cod=0000;
    nr_pagini=0;

}

void Book::adaugare_fisier()
{
    ofstream b ("Carti.txt", ofstream::app);
    if (b.is_open()==1)
        {
           // b<<titlu<<" "<<autor<<" "<<locatie<<" "<<cod<<" "<<nr_pagini<<" "<<nr_exemplare<<" "<<an_aparitie<<endl;
        }
  else cout << "Unable to open file";
}
string Book::gettitlu()
{
    return this->titlu;
}
string Book::getautor()
        {
            return autor;
        }
string Book::getlocatie()
        {
            return locatie;
        }
int Book::getcod()
        {
            return cod;
        }
int Book::getnr_pagini()
        {
            return nr_pagini;
        }
int Book::getnr_exemplare()
        {
            return nr_exemplare;
        }
Date Book::getan_aparitie()
        {
            return an_aparitie;
        }

