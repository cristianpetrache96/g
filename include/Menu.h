#ifndef MENU_H
#define MENU_H

#include "Manager.h"
#include "User.h"


class Menu
{
    public:
        Menu();
        ~Menu();
        void FirstMenu();
        void SecondMenu();
        void ThirdMenu();
        int Option(int);
        void AltaOptiune();
        Manager manager;
        User user;

};

#endif // MENU_H
