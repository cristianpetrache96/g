#ifndef USER_H
#define USER_H
#include <iostream>
#include <vector>
#include "Date.h"
#include "Book.h"

using namespace std;

class User
{
    public:
        User();
        ~User();
       string getUsername();
       string getPassword();
       void  setUsername(string);
       void  setPassword(string);
       void Login();
      // string readPassword();

    private:
        string username;
        string password;
        vector<Book> carti_imprumutate;
        Date data_limita;

};

#endif // USER_H
