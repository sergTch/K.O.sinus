#include "team.h"

Team::Team(){}

Team::Team(Pizza& p){
    pizza = p;
    ids.push_back(p.id);
}

void Team::add(Pizza& p){
    pizza.add(p);
    ids.push_back(p.id);
}