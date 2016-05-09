#ifndef MANAGER_H
#define MANAGER_H

#include "User.h"

class Manager
{
    public:
        Manager();
        ~Manager();
        void RegisterUser(User &);
        int ValidateUser(User &);
        int ValidateLogin(User &);
        void registerUsername(string);
        void registerPassword(string);
        int validateUsername(string);
        int validatePassword (string);
};

#endif // MANAGER_H
