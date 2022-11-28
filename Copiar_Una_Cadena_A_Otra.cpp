#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main (){
	
	char cadena1[50];
	char cadena2[50];
	
	cout<<"Ingrese el contenido de la primer cadena: ";
	cin.getline(cadena1,50,'\n');
	
	strcpy(cadena2,cadena1);
	
	cout<<"La segunda cadena contiene: "<<cadena2<<endl;
	
	getch ();
	return 0;
}
