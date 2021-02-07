#ifndef PIZZA
#define PIZZA
#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<set>

using namespace std;

class pizza{
public:
	vector<string> ing;
	int c;
    int id;

	pizza();
	pizza(int t);
	void read(istream& infile);
	void read(istream& infile, set<string>& ingSet);
	void show(ostream& out);
	int compare(pizza& pizza2);

    bool operator<(pizza& pizza2);
};

#endif