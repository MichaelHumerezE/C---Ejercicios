#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main () {
	char nombre [] = "Michael";
	char apellido1 [] = {'H','u','m','e','r','e','z'};
	char apellido2 [20] ;
	
	cout << "Ingrese su segundo apellido: ";
	cin.getline(apellido2,20,'\n');
	
	cout << "Su nombre completo es: " << nombre << " "<<apellido1<<" "<<apellido2<<endl;
	
	getch();
	return 0;
}
