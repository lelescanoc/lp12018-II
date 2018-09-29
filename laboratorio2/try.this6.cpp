##include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>

using namespace std;
int main()
{
	vector<string>words;
	string temp;
	vector<string>no_gusta;
	no_gusta.push_back("shit");
	no_gusta.push_back("mierda");
	string pi="PIIII";
	
	while(cin>>temp)
	{
		words.push_back(temp);
		
	for(int i=0;i<no_gusta.size();i++)
		{
			if(temp== no_gusta[i] )
			{
				temp="piiii";
			}
		}
		cout<<temp<<" ";
	}
}
