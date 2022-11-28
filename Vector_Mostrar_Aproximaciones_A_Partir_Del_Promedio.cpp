#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int vector[100], suma=0, promedio=0,n, sup=0, inf=10000,vectorsup[50], vectorinf[50];
	int a=0,b=0;
	
	cout << "Digite el numero de elementos >= 2 para el vector: ";
	cin >> n;
	
	for (int i=0;i<n;i++){
		cout<<i+1<<".- Digite un numero: ";
		cin>>vector[i]; 
		suma = suma + vector[i];
		promedio = suma / n ;
	}
	
	cout << "El promedio es: "<<promedio<<endl;
	
	if (n<2){
		
		cout<<"El vector no puede tener aproximaciones porque solo tiene 1 elemento."<<endl;
		exit(1);
		
	}else
	{
		
	
		for (int i=0;i<n;i++){
		
			if (vector[i]<promedio){
			
				vectorinf[a]=vector[i];
			
				if(vectorinf[a]>sup){
					
					sup=vectorinf[a];
					
				}
			
				a = a + 1;
			
			}else
			{
				if(vector[i]>promedio){
				
					vectorsup[b]=vector[i];
				
					if(vectorsup[b]<inf){
					
					inf=vectorsup[b];
				
					}
			
					b = b + 1;
				}
			}
		
		}
	
	}
	
	if ((sup==0)&&(inf==10000)){
	
		sup=promedio;
		inf=promedio;
	}
	
	cout << "La aproximacion inferior es: " <<sup<<endl;
	cout << "La aproximacion superior es: " <<inf<<endl;
	
	system("pause");
	return 0;
}
