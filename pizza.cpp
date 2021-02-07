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
        ing.push_back(s);
    }
    sort(ing.begin(),ing.end());
}

void pizza::read(istream& infile, set<string>& ingSet){
    infile >> c;
    string s;
    for (int i = 0; i < c; i++)
    {
        infile>>s;
        ing.push_back(s);
        ingSet.insert(s);
    }
    sort(ing.begin(),ing.end());
}

void pizza::show(ostream& out){
    out << id << " " << c;
    for (int i = 0; i < c; i++)
        out << " " << ing[i];
    out << endl;
}

int pizza::compare(pizza& pizza2){
    int s1=c, s2=pizza2.c, i=0, j=0;
    int counter=0;
    while(i<s1 && j<s2)
    {
        if (ing[i]>pizza2.ing[j])
        {
            j++;
        }
        else if (ing[i]<pizza2.ing[j])
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