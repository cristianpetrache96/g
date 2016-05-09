#ifndef REGISTRU_H
#define REGISTRU_H

#include <iostream>
#include <vector>
#include "Book.h"
#include "User.h"

using namespace std;

class Registru
{
    public:
        Registru();
        int cautare_carte_in_registru(Book);
        void adaugare_carte(Book);
        void eliminare_carte(Book);
        void adaugare_carte_user(Book);
        void eliminare_carte_user(Book);
    private:
        vector<Book> carti_inventar;
        vector<User> carti_user;
        vector<Book> carti_imprumutate;

};

#endif // REGISTRU_H
