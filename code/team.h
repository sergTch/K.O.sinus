#ifndef TEAM
#define TEAM

#include "pizza.h"

class Team{
public:
    Pizza pizza;
    vector<int> ids;
    int size;

    Team();
    Team(Pizza& p);

    void show(ostream& out);
    void add(Pizza& p);
};

#endif