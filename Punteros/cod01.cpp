#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cout<<"te tam de char es"<<sizeof(char)<<" "<<sizeof('a')<<'\n';
	cout<<"te tam de int es"<<sizeof(int)<<" "<<sizeof(2+2)<<'\n';
	int *p=0;
	cout<<"te tam de int es"<<sizeof(int*)<<" "<<sizeof(p)<<'\n';
	vector<int>v(1000);
	cout<<"te tam de vecor<int>(1000) es"<<sizeof(vector<int>)<<" "<<sizeof(v)<<'\n';
}
