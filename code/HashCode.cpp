#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>

#include"pizza.h"

using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ifstream infile("a_example");
	int m,t2,t3,t4;
	infile >> m >> t2 >> t3 >> t4;
	vector<pizza> arr(m);
	map<string, int> ingSet;

	for(int i = 0; i < m; i++)
	{
		arr[i] = pizza(i);
		arr[i].read(infile, ingSet);	
	}

	sort(arr.begin(), arr.end());
	for (int i = 0; i < m; i++)
		arr[i].show(cout);

	for (auto it = ingSet.begin(); it != ingSet.end(); it++)
		cout << it->first << " " << it->second << endl;
	
	cout << endl;
	cout << arr[0].compare(arr[2]);

	return 666;
}
