#include<iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <sstream>
#include "Registru.h"

using namespace std;
Registru::Registru()
{
    //ctor
}

void Registru::adaugare_carte(Book c)
{
    if(cautare_carte_in_registru(c)==0)
    {
        ofstream b("Carti.txt", ofstream::app);
        if (b.is_open()==1)
            {
                b<<c.gettitlu()<<" "<<c.getautor()<<" "<<c.getlocatie()<<" "<<c.getcod()<<" "<<c.getnr_pagini()<<" "
                    <<c.getnr_exemplare()<<endl;//<<" "<<c.getan_aparitie()<<endl ;
            }
            else cout << "Unable to open file";
        b.close();
    }
}
int Registru::cautare_carte_in_registru(Book c)
{
    int ok;

    string verif =c.gettitlu()+" "+c.getautor()+" "+c.getlocatie();
    ostringstream convert;
    convert << c.getcod();
    verif= verif+" "+convert.str();
    convert<<c.getnr_pagini();
    verif= verif+" "+convert.str();
    convert<<c.getnr_exemplare();
    verif= verif+" "+convert.str();
    //convert<<c.getan_aparitie();
    //verif= verif+" "+convert.str();
    string line;
    bool found;

    ifstream b("Carti.txt");

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
/*void REgistru::eliminare_carte(Book c)
{
    ifstream fin("Carti.txt");

   string line;
   vector<string> v;
   while(!fin.eof())
   {
          getline(fin, line);
          v.push_back(line);
   }
   for(unsigned int i=0;i<v.size();i++)
{
// conditie sterge cartea din fisier
}
   FILE *fout;
    fout = fopen ("Carti.txt", "w");
   for(unsigned int i = 0; i <= v.size(); i++)
   {
          string line = v[i];
          fputs (line,fout);
   }
   fclose (fout);
}*/
