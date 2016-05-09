#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include "User.h"



using namespace std;

User::User()
{
    //ctor
}

User::~User()
{
    //dtor
}
string User::getUsername()
{
    return username;
}

string User::getPassword()
{
    return password;
}

void User::setUsername(string name)
{
    this->username=name;
}

void User::setPassword(string pass)
{
    this->password=pass;
}

void User::Login()
{
    string log_name;
    string log_pass;

    cout <<"Introduceti numele de utilizator: "<<endl;
    cin>>log_name;
    setUsername(log_name);

    cout<<"Introduceti parola:"<<endl;
    cin>>log_pass;
    setPassword(log_pass);
}

