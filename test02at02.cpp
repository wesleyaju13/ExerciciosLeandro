#include <iostream>
#include <iomanip>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl; 
using std::setw; 
//Aluno:Wagner Santos Prata 
//Fa�a um programa que calcule a m�dia final de um aluno atrav�s da m�dia aritm�tica.
//A l�gica referente ao c�lculo da m�dia deve estar em uma fun��o.

float media(float soma,int quantidade){
  float media;
  media = soma/quantidade;
  return (media);	
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    
    float nota, notaux;
    float soma, somaux;
	int cont;
	
	cout<<"Programa que calcule a m�dia final";
	printf("\n");
	cout<<"Quantidade de Notas (Unidades) desejadas: ";
	cin>>cont;
	printf("\n");
	
	do{
	cout<<"Informe a nota: ";
	cin>>nota;
    notaux = nota;
    	if(notaux > 0){
		somaux = somaux +notaux;
		}		
	 }
	while(nota > 0);
	
	
	cout<<endl;	
	cout<<"Soma de todas as notas: "<<somaux<<endl;
	cout<<endl;		
	cout<<"A m�dia aritmetrica �  "<<media(somaux,cont)<<endl;	
	
	}
