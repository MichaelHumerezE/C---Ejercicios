#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main (){
	
	int longitud;
	char cadena [50];
	
	cout<<"Es libre de escribir lo que quiera: ";
	cin.getline(cadena,50,'\n');
	
	longitud = strlen(cadena);
	
	cout<<cadena<<endl;
	
	if (longitud>10){
		
		cout<<"Su cadena tiene mas de 10 caracteres."<<endl;
		
	}else{
		
		cout<<"Su cadena tiene menos de 10 caracteres."<<endl;

		
	}
	
	getch ();
	return 0;
}
