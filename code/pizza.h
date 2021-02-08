#ifndef PIZZA
#define PIZZA
#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>

using namespace std;

class Pizza{
public:
	set<int> ing;
	int c;
    int id;

	Pizza();
	Pizza(int t);
	void read(istream& infile, map<string, int>& ingMap, int& ingId);
	void show(ostream& out);
	int compare(Pizza& pizza2);
	void add(Pizza& pizza2);

    bool operator<(Pizza& pizza2);
};

#endif