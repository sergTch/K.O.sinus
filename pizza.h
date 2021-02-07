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

	pizza();
	void read(istream& infile);
	void read(istream& infile, set<string>& ingSet);
	void show(ostream& out);
	int compare(pizza& pizza2);
};

#endif