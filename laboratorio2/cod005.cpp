#include<iostream>
using namespace std;
int main()
{
	const double cm_per_inch=2.54;
	int length=1;
	char unit= ' ';
	cout<<" por favor ingrese una lonitud seguida de su unidad(c o i): ";
	cin>>length>>unit;
	if(unit=='i')
	{
		cout<<length<<" in ="<<cm_per_inch*length<<"cm \n";
	}
	else if(unit=='c')
	{
		cout<<length<<" in ="<<length/cm_per_inch<<"cm \n";
	}
	else

		cout<<"Unidad no conocida";
	
	return 0;
}
