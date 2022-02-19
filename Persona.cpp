#include <iostream>
using namespace std;
class Persona{
	// atributos
	protected : string nombres,apellidos,direccion,fn;
				int telefono;
				
	// 
	protected : 
	// constructor
					Persona(string nom,string ape, string cui,string dir,int tel,string f){
					nombres = nom;
					apellidos = ape;
					cui = cui;
					direccion = dir;
					telefono = tel;
					fn = f;
				}
		// metodos
	void mostrar();
	void agregar();
};
