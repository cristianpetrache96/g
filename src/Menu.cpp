#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "Menu.h"
#include "Manager.h"
#include "User.h"

using namespace std;

Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}
void Menu::FirstMenu()
{
     string username;
    string pass;

    cout<<"-------Meniu Principal-------------"<<endl
     <<"1.Inregistrare"<<endl
     <<"2.Logare"<<endl
     <<"3.Cautare carte"<<endl
     <<"4.Iesire"<<endl
     <<"-----------------------------------"<<endl;

      switch(Option(4))
    {

        case 1:
            system("CLS");


            do
            {
                cout<<"Introduceti un nume de utilizator:"<<endl;
                cin>>username;

                if (manager.validateUsername(username)==0)
                    cout<<"Utilizatorul exista deja!"<<endl;
                }while(manager.validateUsername(username)==0);

                user.setUsername(username);


             do
            {

                cout<<"Introduceti parola:"<<endl;
                cin>>pass;

                if (manager.validatePassword(pass)==0)
                    cout<<"Parola trebuie sa contina intre 6 si 32 de caractere!"<<endl<<"Introduceti alta parola!"<<endl;
            }while(manager.validatePassword(pass)==0);

            user.setPassword(pass);

            manager.RegisterUser(user);
            AltaOptiune();
            break;
        case 2:
            system("CLS");
            do
            {
                user.Login();
                if (manager.ValidateLogin(user)==0)
                    cout<<"User sau parola gresite!"<<endl;
                else
                    cout <<"Bun venit," <<user.getUsername()<<"!"<<endl<<endl;

            }while(manager.ValidateLogin(user)==0);
            system("CLS");

            if (user.getUsername()=="Admin")
                SecondMenu();
            else ThirdMenu();

                break;
        case 3:
            system("CLS");
            break;
        case 4:
            break;
    }
}

int Menu::Option(int n)
{
    int optiune1;
    cout<<"Introduceti optiune: ";
   do
    {
        cin>>optiune1;
        if (optiune1<1 || optiune1>n)
            cout<<"Optiune incorecta!Introduceti o optiune noua!"<<endl;
    }while(optiune1<1 || optiune1>n);
    return optiune1;
}

void Menu::AltaOptiune()
{
    char optiune2;
    cout<<endl<<"Mai doriti sa faceti o alta actiune?[y/n]"<<endl;
    do
            {
                optiune2=getch();
                if(optiune2!='y' && optiune2!='Y' && optiune2!='n' && optiune2!='N')
                    cout<<"Optiune incorecta!Introduceti o optiune noua!"<<endl;
            }while(optiune2!='y' && optiune2!='Y' && optiune2!='N' && optiune2!='n');

            switch(optiune2)
            {
                case 'y':
                            system("CLS");
                            FirstMenu();

                            break;
                case 'Y':   system("CLS");
                            FirstMenu();
                            break;

                case 'n': break;

                case 'N': break;
            }
}

 void Menu::SecondMenu()
{
    cout<<"\n--------------------------------------\n";
    cout<<"1.Adauga o carte in catalog"<<endl;
    cout<<"2.Cauta o carte in catalog"<<endl;
    cout<<"3.Carti imprumutate"<<endl;
    cout<<"4.returnare carte"<<endl;
    cout<<"5.Delogare"<<endl;
    cout<<"6.Iesire"<<endl;
    cout<<"\n--------------------------------------\n";
    switch(Option(6))
    {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
    }
}

void Menu::ThirdMenu()
{
    cout<<"\n--------------------------------------\n";
    cout<<"1.Detalii cont"<<endl;
    cout<<"2.Cauta o carte"<<endl;
    cout<<"3.Imprumuta o carte"<<endl;
    cout<<"4.Delogare"<<endl;
    cout<<"5.Iesire"<<endl;
    cout<<"\n--------------------------------------\n";

    switch(Option(5))
    {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
    }

}
