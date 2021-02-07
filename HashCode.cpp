#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<set>

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
	set<string> ingSet;

	for(int i = 0; i < m; i++)
	{
		arr.push_back(pizza());
		arr[i].read(infile, ingSet);	
	}
	
	// for(int i = 0; i < m; i++)
	// 	arr[i].show(cout);

	for (auto it = ingSet.begin(); it != ingSet.end(); it++)
		cout << *it << " ";
	cout << endl;
	cout << arr[0].compare(arr[2]);
	return 666;
}
