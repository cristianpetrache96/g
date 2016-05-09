#include <fstream>
#include "Manager.h"

Manager::Manager()
{
    //ctor
}

Manager::~Manager()
{
    //dtor
}

int Manager::validatePassword(string pass)
{
    int ok=1;

    if(pass.length()<6 || pass.length()>32)
    {
        ok=0;
    }

    return ok;
}

int Manager::validateUsername(string user)
{
    ifstream fisier("Log.txt");
        string us;
        int ok=1;

        while ((!fisier.eof()) && (ok==1))
            {

                fisier >> us;
                if (us==user)
                {
                    ok=0;
                    fisier.seekg(0,fisier.beg);
                    break;

                }
            }


        return ok;
}

int Manager::ValidateUser(User &u)
{
    int ok;

    if(validatePassword(u.getPassword())!=0&& validateUsername(u.getUsername())!=0)
        ok=1;
    else ok=0;

    return ok;
}

void Manager::RegisterUser(User &u)
{
    if (ValidateUser(u)!=0)
    {
        registerUsername(u.getUsername());
        registerPassword(u.getPassword());
    }
}

int Manager::ValidateLogin(User &u)
{
    int ok;

    string verif =u.getUsername()+" "+u.getPassword();
    string line;
    bool found;

    ifstream b("Log.txt");

    while (getline(b,line)&&!found)
    {

        if (line.compare(verif)==0)

            found=true;
    }
    b.close();

    if (found)
        ok=1;
    else ok=0;

    return ok;

}

void Manager::registerPassword(string pass)
{
    ofstream b ("Log.txt", ofstream::app);
    if (b.is_open()==1)
        {
            b<<pass<<endl;
        }
  else cout << "Unable to open file";
}

void Manager::registerUsername(string name)
{
    ofstream b("Log.txt",fstream::app);

    b<<name+" ";
}

