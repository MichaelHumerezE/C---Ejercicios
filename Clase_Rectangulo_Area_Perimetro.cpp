#include <iostream>
#include <stdlib.h>

using namespace std;

class rectangulo{
	private:
		int largo;
		int ancho;
		
	public:
		rectangulo(int,int);
		void perimetro();
		void area();
};

rectangulo::rectangulo(int _largo,int _ancho){
	largo = _largo;
	ancho = _ancho;
}

void rectangulo::perimetro(){
	
	cout<<"El perimetro del rectangulo es: "<<2*largo+2*ancho<<"\n";
}

void rectangulo::area(){
	cout<<"El area del rectangulo es: "<<(largo*ancho)<<endl;
}

int main (){
	int x,y;
	cout<<"Ingrese el largo del rectangulo: ";cin>>x;
	cout<<"Ingrese el ancho del rectangulo: ";cin>>y;
	
	rectangulo p1(x,y);
	p1.area();
	p1.perimetro();
	
	system("pause");
	return 0;
}
