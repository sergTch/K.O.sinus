#ifndef TEAM
#define TEAM

#include "pizza.h"

class team{
public:
    pizza piz;
    vector<int> ids;
    
    team();
    team(pizza& p);
};

#endif