#include<iostream>
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
		cout<<" Numero de palabras: "<<words.size()<<endl;
		sort(words.begin(),words.end());
		{
		for(int i=0;i<words.size();i++)
		{
			if(i==0 || words[i-1]!= words[i] && words[i]!=no_gusta[0] && words[i]!=no_gusta[1])
			{
			cout<<words[i]<<endl;
		
			}
			else
			cout<<pi<<endl;
			
		}
		}

	}	
}
