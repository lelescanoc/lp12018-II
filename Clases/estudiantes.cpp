#include"Estudiante.h"
#include <exception>
Estudiante::Estudiante(string _nombre, int _edad, int _codigo,string _carrera)
{
	nombre=_nombre;
	edad=_edad;
	codigo=_codigo;
	carrera=_carrera;
}
void Estudiante::matricularse()
{
	
	cout<<nombre<<" Se matriculo en "<<carrera<<" con el codigo "<<codigo<<endl;
}
void Estudiante::estudiar()
{
	cout<<nombre<<" con "<<edad<<" anios estudiara "<<carrera<<endl;
}
int main()
try
{
	Estudiante e1("Wuido",19,45826,"software");
	Estudiante e2("felix",-20,5454545,"software");
	while(_edad<0){
	cout<<"error, no se pudo crear su edad, ingrese edad nueva";
	cin>>_edad;
	e1.matricularse();
	e2.estudiar();
	}
	
	while(_codigo<0){
	cout<<"error, no se pudo crear su edad, ingrese edad nueva";
	cin>>_codigo;
	e1.matricularse();
	e2.estudiar();
	}
	
	return 0;

}
	catch(exception & e)
	{
        cerr<<"Error: "<<e.what()<<endl;
        return 1;
    }

