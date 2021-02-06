#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	std::ifstream infile("a_example");
	int m,t2,t3,t4;
	infile>>m>>t2>>t3>>t4;
	vector<vector<string>> arr(m);
	for(int i=0;i<m;i++)
	{
		int c;
		infile>>c;
		for(int j=0;j<c;j++)
		{
			string s;
			infile>>s;
			arr[i].push_back(s);
		}
	}
	
	
	
	
	return 0;
}
