#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char cad1[] = "Hola que tal ";
	char cad2[50];
	
	cout<<"Ingrese su nombre: ";
	cin.getline(cad2,50);
	strcat(cad1,cad2);
	cout<<cad1<<endl;
	
	getch();
	return 0;
}
