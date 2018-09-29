#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	vector<double>temps;
	double temp;
	while(cin>>temp)
	{
	double sum=0;
	for(int i=0; i<temps.size();i++)
	{
		sum=sum+temps[i];
		cout<<"Temperatura promedio: "<<sum/temps.size()<<endl;
		sort(temps.begin(),temps.end());
		cout<<"Median temperature: "<<temps[temps.size()/2]<<endl;
	}
	}
}
