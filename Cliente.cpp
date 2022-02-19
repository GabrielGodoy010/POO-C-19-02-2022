#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona {
	// atributos
	private : string nit;
	//constructor
	public : 
	Cliente(string nom,string ape, string cui, string dir,int tel,string f,string n) : Persona(nom,ape,cui,dir,tel,f){
		nit = n;
	}
	// metodos get y set
	
	// set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setCui(string cui){cui = cui;}
	void setDireccion(string dir){direccion = dir;}
	void setFN(string f){fn = f;}
	void setTelefono(int tel){telefono = tel;}
	
	// get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getCUI(){return cui;}
	string getDireccion(){return direccion;}
	string getFN(){return fn;}	
	int getTelefono(){return telefono;}
	
	void mostrar(){
		cout<<"_______________"<<endl;
		cout<<"Nit: "<<nit<<endl;
		cout<<"Nombres: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"CUI: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		cout<<"Nacimiento: "<<fn<<endl;
	}
};
