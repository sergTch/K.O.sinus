#include "pizza.h"

Pizza::Pizza(){}

Pizza::Pizza(int t){
    id = t;
}

void Pizza::read(istream& infile, map<string, int>& ingMap, int& ingId){
    infile >> c;
    string s;
    int t;
    for (int i = 0; i < c; i++)
    {
        infile>>s;
        t = ingMap[s];
        if (t == 0){
            ing.insert(ingId);
            ingMap[s] = (ingId++);
        } else ing.insert(t);
    }
}

void Pizza::show(ostream& out){
    out << id << " " << c;
    for (auto it = ing.begin(); it != ing.end(); it++)
        out << " " << *it;
    out << endl;
}

int Pizza::compare(Pizza& pizza2){
    auto i = ing.begin();
    auto j = pizza2.ing.begin();
    int counter=0;
    while(i != ing.end() && j != pizza2.ing.end()){
        if (*i > *j)
            j++;
        else if (*i < *j){
            counter++;
            i++;
        }
        else{
            i++;
            j++;
        }
    }
    while (i != ing.end()){
        i++;
        counter++;
    }
    
    return counter;
}

void Pizza::add(Pizza& pizza2){
    for (auto i = pizza2.ing.begin(); i != pizza2.ing.end();i++)
        ing.insert(*i);
    c = ing.size();
}

bool Pizza::operator<(Pizza& pizza2){
    return c > pizza2.c;
}