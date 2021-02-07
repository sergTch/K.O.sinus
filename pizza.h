#ifndef PIZZA
#define PIZZA
#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

class pizza{
public:
	vector<string> ing;
	int c;

	pizza();
	void read(istream& infile);
	void show(ostream& out);
	int compare(pizza& pizza2);
};

#endif