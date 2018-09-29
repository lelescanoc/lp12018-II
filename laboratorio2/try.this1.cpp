#include<iostream>
#include<string>
using namespace std;
int main()
{
	const double y_a_d=0.0089;
	const double e_a_d=1.18;
	const double l_a_d=1.31;
	char moneda=' ';
	int monto=1;
	cout<<"Ingrese su monto y tipo de moneda( y o l o e o d) que desea cambiar a dolar"<<endl;
	cin>>monto>>moneda;
	if(moneda=='y')
	{
		cout<<monto<<" yenes equivalen a=  "<<monto/y_a_d<<" dolares";
	}
		else if(moneda=='e')
	{
		cout<<monto<<" euros equivalen a=  "<<monto/e_a_d<<" dolares";
	}
		else if(moneda=='l')
	{
		cout<<monto<<" libras equivalen a = "<<monto/l_a_d<<" dolares";
	}
	else if(moneda=='d')
	{
		cout<<"elija la opcion a cambiar( y o e o l)"<<endl;
		cin>>moneda;
		if(moneda=='y')
		{
		cout<<monto<<" dolares equivalen a="<< monto*112.57<<"yenes";
		}
		 if(moneda=='e')
		{
		cout<<monto<<" dolares equivalen a="<< monto*0.85<<"euros";
		}
		 if(moneda=='l')
		{
		cout<<monto<<" dolares equivalen a="<< monto*0.76<<"libras";
		}
	}
	else
		cout<<"No conozco esa moneda"<<moneda;
	return 0;
}
