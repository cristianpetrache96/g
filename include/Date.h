#ifndef DATE_H
#define DATE_H
#pragma once

#include<iostream>

using namespace std;

class Date
{
    public:
        Date(int=0,int=0,int=1000);
        friend istream& operator>>(istream&, Date&);
        friend ostream& operator<<(ostream&,const Date&);

    private:
        unsigned int zi;
        unsigned int luna;
        unsigned int an;

};

#endif // DATE_H
