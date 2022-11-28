#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main() {
	
	char palabra1[50], palabra2[50];
	
	cout<<"Ingrese cualquier caracter para la primera cadena: ";
	cin.getline(palabra1,50);
	cout<<"Ingrese cualquier caracter para la segunda cadena: ";
	cin.getline(palabra2,50);
	
	if ((strcmp(palabra1,palabra2)) != 0){
		
		if (strcmp(palabra1,palabra2) > 0){
			
			cout<<"La cadena mayor alfabeticamente es: "<<palabra1<<endl;
			
		}else{
			
			cout<<"La segunda cadena es mayor alfabeticamente: "<<palabra2<<endl;
			
		}
		
	}else{
		
	
		cout<<"Las dos cadenas son iguales"<<endl;
	}
	
	
	getch();
	return 0;
}
