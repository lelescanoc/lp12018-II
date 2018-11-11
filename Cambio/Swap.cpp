#include<iostream>
#include<vector>
using namespace std;
vector<int> cambio (vector<int> a){
vector<int>b;
for(int i=a.size()-1;i>=0;i--){
b.push_back(a[i]);
}
return b;
}
void cambio2(vector<int>&a)
{
	int j=0;
	int temp=0;
	for(int i=a.size()-1;i>=0;i--)
	{
		if(i<=j)
		{
			break;
		}
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
    j++;
	}
}
void print(vector<int> v){
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i];
	}
  cout<<endl;
}
int main()
{
	vector<int>x;
	x.push_back(1);
	x.push_back(2);
	x.push_back(3);
	x.push_back(4);
	x.push_back(5);
	vector<int>r=cambio(x);
	
	print(x);
	print(r);
  print(x);
	cambio2(x);
	print(x);
	return 0;
}
