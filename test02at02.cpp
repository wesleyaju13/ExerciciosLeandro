#include <iostream>
#include <iomanip>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl; 
using std::setw; 
//Aluno:Wagner Santos Prata 
//Faça um programa que calcule a média final de um aluno através da média aritmética.
//A lógica referente ao cálculo da média deve estar em uma função.

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
	
	cout<<"Programa que calcule a média final";
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
	cout<<"A média aritmetrica é  "<<media(somaux,cont)<<endl;	
	
	}
