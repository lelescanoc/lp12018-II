#include<iostream>
using namespace std;
int square(int x)
{
	for(int i=0;i<x;i++)
	{
		cout<<i<<"+"<<i<<"=="<<i+i<<endl;
	}
}
int main()
{
	
	int sumas;
	int a;
	cin>>a;
	sumas=square(a);
	cout<<sumas<<endl;
}
