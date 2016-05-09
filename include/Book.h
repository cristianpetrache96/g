#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include"Date.h"

using namespace std;

class Book
{
    public:
        Book();
        void adaugare_fisier();
        string gettitlu();
        string getautor();
        string getlocatie();
        int getcod();
        int getnr_pagini();
        int getnr_exemplare();
        Date getan_aparitie();
    private:
        string titlu;
        string autor;
        string locatie;
        int cod;
        unsigned int nr_pagini;
        unsigned int nr_exemplare;
        Date an_aparitie;
};

#endif // BOOK_H
