#include<iostream>
using namespace std;
class Date
{
	int y,m,d;
	public:
		Date(int y, int m, int d);
		void add_day(int n);
		int month()
		{
			return m;
		}
		int day()
		{
			return d;
		}
		int year()
		{
			return y;
		}
};
Date::Date(int y, int m, int d) : y(y), m(m), d(d){}
int main()
{
	Date birthay(1970,12,30);
	cout<<birthay.month()<<endl;
}
