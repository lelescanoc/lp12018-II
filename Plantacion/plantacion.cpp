#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int numero_plantas,dias_trabajados,tiempo_vida;
	int x,y,z; //x= lado izquierda --- y= lado derecho --- z= contador de vidas

	cin >> numero_plantas >> dias_trabajados >> tiempo_vida; // ingresar datos
	
	int planta[numero_plantas]={};
	z=0;
	
	for(int i=1; i<=dias_trabajados; i++) 
	{
		cin>>x>>y; //intervalo entre plantas
		
		for(int j=1; j<=numero_plantas; j++)
		{
			if(j<x || j>y)
			{
				planta[j]=planta[j]+1;
				
				if(planta[j]==tiempo_vida)
				{
					z=z+1;
					planta[j]= pow(10,7);	
				}
			}
			else
			{
				if(planta[j]>0 && planta[j]!=pow(10,6))
					planta[j]=0;
			}
		}		
	}		
	
	cout<<numero_plantas - z;
	for (int j=1; j<=numero_plantas; j++)
	{
		if(planta[j]<pow(10,7))
		{
			cout<<" "<<j;
		}
	}
	return 0;
}
