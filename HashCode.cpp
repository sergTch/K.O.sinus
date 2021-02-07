#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include "pizza.h"

using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ifstream infile("a_example");
	int m,t2,t3,t4;
	infile >> m >> t2 >> t3 >> t4;
	vector<pizza> arr(m);
	for(int i=0;i<m;i++)
	{
		arr.push_back(pizza());
		arr[i].read(infile);	
	}
	for(int i=0;i<m;i++)
		arr[i].show(cout);

	cout << arr[0].compare(arr[2]);
	return 666;
}
