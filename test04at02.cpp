#include<iostream>
#include <locale.h>
using std::cout;
using std::cin;
using std::endl;
//Fun��o Triangulo Classifica��o
void trianguloClas(float valorX, float valorY, float valorZ){
 	if((valorX + valorY != valorZ) && (valorZ + valorY != valorX) && (valorX + valorZ != valorY))
	{       
 	   if((valorX == valorY) && (valorX == valorZ) && (valorY == valorZ) ){
 	   	cout<<"\nEsse � um Tri�ngulo Equil�tero"<<endl;                   }
	   if((valorX != valorY) && (valorY == valorZ) || (valorX == valorY) && (valorY != valorZ)){
	   cout<<"\nEsse � um Tri�ngulo Is�sceles"<<endl;       					              }
	   if((valorX != valorY) && (valorX != valorZ) && (valorY != valorZ) ){
 	   cout<<"\nEsse � um Tri�ngulo Escaleno"<<endl;                      }
   }else{
   	 cout<<"\nValores n�o classifica corresponde a um tringulo"<<endl;  
   }	
}

int main(){ setlocale(LC_ALL,"Portuguese");

	float valorX, valorY, valorZ, soma;
	float TriEqui, TriIsos, TriEsc;

	cout<<"Classifica��o de tri�ngulos"<<endl;    
	cout<<"PLS, Informe o valor do lado X: ";
	cin>>valorX;
	cout<<"PLS, Informe o valor do lado Y: ";
	cin>>valorY;
	cout<<"PLS, Informe o valor do lado Z: ";
	cin>>valorZ;
	trianguloClas(valorX, valorY, valorZ);
	
//	 - Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais.
//	 - Tri�ngulo Is�sceles: os comprimentos de 2 lados s�o iguais.
//	 - Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferentes.Triangulo
	return 0;
}
