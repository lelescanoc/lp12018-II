#include<iostream>
using namespace std;
int square(int);
double sqrt(double);
int main()
{
	int x=square(44);
}
int square(int x)
{
	return x*x;
}
void print_square(int v)
{
	cout<<v<<'\t'<<v*v<<endl;
}
int main()
{
	for(int i=0; i<100;i++)
	{
		print_sqaure(i);
	}
}
