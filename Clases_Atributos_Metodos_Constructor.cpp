#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona{
	private: //Atributos
		int edad;
		string nombre;
	public: //Métodos
		Persona (int,string); // Constructor
		void leer();
		void correr();
};

//Constructor, nos sirve para inicializar los atributos
Persona::Persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton con "<<edad<<" años"<<endl;
}

int main (){
	Persona p1 = Persona(20,"Michael");
	Persona p2(19,"Maria");
	Persona p3(21,"Juan Pablito");
	p2.correr();
	p1.leer();
	p3.leer();
	p3.correr();
	
	system("pause");
	return 0;
}
