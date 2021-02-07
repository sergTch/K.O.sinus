#include "pizza.h"

pizza::pizza(){}

pizza::pizza(int t){
    id = t;
}

void pizza::read(istream& infile){
    infile >> c;
    string s;
    for (int i = 0; i < c; i++)
    {
        infile>>s;
        ing.insert(s);
    }
}

void pizza::read(istream& infile, map<string, int>& ingSet){
    infile >> c;
    string s;
    for (int i = 0; i < c; i++)
    {
        infile>>s;
        ing.insert(s);
        ingSet[s]++;
    }
}

void pizza::show(ostream& out){
    out << id << " " << c;
    for (auto it = ing.begin(); it != ing.end(); it++)
        out << " " << *it;
    out << endl;
}

int pizza::compare(pizza& pizza2){
    int s1 = c, s2 = pizza2.c;
    auto i = ing.begin();
    auto j = pizza2.ing.begin();
    int counter=0;
    while(i != ing.end() && j != pizza2.ing.end())
    {
        if (*i > *j)
        {
            j++;
        }
        else if (*i < *j)
        {
            i++;
        }
        else
        {
            i++;
            j++;
            counter++;
        }
    }
    return s1-counter;
}

bool pizza::operator<(pizza& pizza2){
    return c < pizza2.c;
}