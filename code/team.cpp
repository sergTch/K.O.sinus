#include "team.h"

Team::Team(){}

Team::Team(Pizza& p){
    pizza = p;
    ids.push_back(p.id);
}

void Team::show(ostream& out){
    out << size;
    for (int i = 0; i < ids.size(); i++)
        out << " " << ids[i];
    out << endl;
}

void Team::add(Pizza& p){
    pizza.add(p);
    ids.push_back(p.id);
}