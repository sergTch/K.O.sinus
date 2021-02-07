#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;
int compare2(vector<string>& sortedpizza1,vector<string>& sortedpizza2)
{
	int s1=sortedpizza1.size(),s2=sortedpizza2.size(),i=0,j=0;
	int counter=0;
	while(i<s1 && j<s2)
	{
		if (sortedpizza1[i]>sortedpizza2[j])
		{
			j++;
		}
		else if (sortedpizza1[i]<sortedpizza2[j])
		{
			i++;
		}
		else
		{
			i++;
			j++;
			counter++;
		}
	}	
	
	
	return s1+s2-counter;
}


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
	for(int i=0;i<m;i++)
	{
		sort(arr.begin(),arr.end());
	}
	
	
	return 666;
}
