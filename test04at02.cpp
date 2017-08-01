#include<iostream>
#include <locale.h>
using std::cout;
using std::cin;
using std::endl;
//Função Triangulo Classificação
void trianguloClas(float valorX, float valorY, float valorZ){
 	if((valorX + valorY != valorZ) && (valorZ + valorY != valorX) && (valorX + valorZ != valorY))
	{       
 	   if((valorX == valorY) && (valorX == valorZ) && (valorY == valorZ) ){
 	   	cout<<"\nEsse é um Triângulo Equilátero"<<endl;                   }
	   if((valorX != valorY) && (valorY == valorZ) || (valorX == valorY) && (valorY != valorZ)){
	   cout<<"\nEsse é um Triângulo Isósceles"<<endl;       					              }
	   if((valorX != valorY) && (valorX != valorZ) && (valorY != valorZ) ){
 	   cout<<"\nEsse é um Triângulo Escaleno"<<endl;                      }
   }else{
   	 cout<<"\nValores não classifica corresponde a um tringulo"<<endl;  
   }	
}

int main(){ setlocale(LC_ALL,"Portuguese");

	float valorX, valorY, valorZ, soma;
	float TriEqui, TriIsos, TriEsc;

	cout<<"Classificação de triângulos"<<endl;    
	cout<<"PLS, Informe o valor do lado X: ";
	cin>>valorX;
	cout<<"PLS, Informe o valor do lado Y: ";
	cin>>valorY;
	cout<<"PLS, Informe o valor do lado Z: ";
	cin>>valorZ;
	trianguloClas(valorX, valorY, valorZ);
	
//	 - Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
//	 - Triângulo Isósceles: os comprimentos de 2 lados são iguais.
//	 - Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.Triangulo
	return 0;
}
