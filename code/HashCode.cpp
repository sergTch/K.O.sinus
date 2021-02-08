#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<list>

#include"pizza.h"
#include"team.h"

using namespace std;

void readInput(int& m, vector<int>& t, list<Pizza>& pizzas, 
			map<string, int>& ingSet, istream& in){
	in >> m >> t[0] >> t[1] >> t[2];

	for(int i = 0; i < m; i++)
	{
		pizzas.push_back(Pizza(i));
		pizzas.back().read(in, ingSet);	
	}

	pizzas.sort();
}

int solve(int& m, vector<int>& t, list<Pizza>& pizzas, 
			map<string, int>& ingSet, ostream& out){
	int score = 0;

	while ((t[0] > 0 || t[1] > 0 || t[2] > 0) && pizzas.end() != pizzas.begin()){
		Team team = Team(pizzas.front());
		pizzas.pop_front();

		for (int i = 0; i < 3; i++)
			if (t[i] > 0)
				team.size = i + 2; 

		for (int p = 1; p < team.size; p++){
			list<Pizza>::iterator best;
			int max = 0, k;

			for (auto i = pizzas.begin(); i != pizzas.end(); i++){
				k = i->compare(team.pizza);
				if (k > max){
					max = k;
					best = i;
				}
			}
			if (max > 0){
				team.add(*best);
				pizzas.erase(best);
			}
		}
		for (int i = team.size; i >= team.ids.size() && i > 1; i--)
			if 	(t[i-2] > 0)
				team.size = i;
		t[team.size - 2]--;
		out << team.size;
		for (int i = 0; i < team.ids.size(); i++)
			out << " " << team.ids[i];
		out << endl;
		score += team.pizza.c * team.pizza.c;
	}
	return score;
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string path = "./data/a_example";
	if (argc > 1)
		path = "./data/" + string(argv[1]);
	ifstream in(path);
	//ostream& out = cout;
	ofstream out(path + "rez");

	vector<int> t(3);
	int m;
	list<Pizza> pizzas;
	map<string, int> ingSet;

	readInput(m, t, pizzas, ingSet, in);
	cout << solve(m, t, pizzas, ingSet, out) << endl;
	
	for (auto i = ingSet.begin(); i != ingSet.end(); i++)
		cout << i->first << " " << i->second << endl;

	return 666;
}
