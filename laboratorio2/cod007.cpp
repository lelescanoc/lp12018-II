#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Por favor ingrese un digito= \n";
	cin>>a;
	switch(a)	
	{
		case'0': case'2':case'4':case'6':case'8':
			cout<<"Es un numero par \n";break;
		case'3': case'5':case'7':case'9':case'1':
			cout<<"Es un numero impar \n";break;
		default:
			cout<<"No es un numero valido. \n";break;
	}
	return 0;

}
	
