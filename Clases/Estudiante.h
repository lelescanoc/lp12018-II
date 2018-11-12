#include<iostream>
#include<string>
using namespace std;

class Estudiante
{
	private:
		string nombre;
		int edad;
		int codigo;
		string carrera;
	public:
		Estudiante(string,int,int,string);
		void matricularse();
		void estudiar();
};

