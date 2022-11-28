#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>

using namespace std;

void pregu1();
float suma(string cad);
bool es_numero(string s);

int main(){
	pregu1();
	system("pause");
	return 0;
}

void pregu1() {
	ifstream file;
	string ruta = "datos.txt"; 
	file.open(ruta.c_str(),ios::in);
	
	if(file.fail()){
		
		cout <<"El documento no se pudo abrir"<<endl;
	}else{
		string line_file= "";
		while (!file.eof()) {
			string line;
			getline(file,line);
		//	cout << line<<endl;
			line_file += line + " ";
		}
		float prom = suma(line_file);
		cout << "La suma de todos los numeros del texto es: "<<prom<<endl;
	}
}

float suma(string cad){
	int suma1=0;
	while (cad.length()>0){
	
	int pos=cad.find_first_of(" ");
	string palabra = cad.substr(0,pos);
		if (es_numero(palabra)){
		suma1 += atoi(palabra.c_str());
		
		}
		cad.erase(0,pos+1);
	}
	return suma1;
}

bool es_numero(string s){
	int n = s.length();
	string alf = "-+0123456789";
	for (int i =0; i<n;i++){
		if(alf.find_first_of(s[i])==-1){
			return false;
		}
		
	}
	return true;
}
