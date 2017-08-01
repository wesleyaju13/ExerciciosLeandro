//Escreva uma fun��o fatorial que calcule o fatorial de um n�mero. 
//O fatorial de um n�mero N � N x N-1 X N-2 ... 1 (Ex: 3! = 3*2*2).
#include<iostream>
#include <locale.h>
using std::cout;
using std::cin;
using std::endl; 

int fatorial(int numero){
		float result = 1;		
		
		for( ;numero>=1;--numero)
		{		
		result = result * numero; //resposta = resposta*fatorial;
		}
		return result;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    
	int valor;
		
	cout<<"Calcule o fatorial de um n�mero |  ";
	cout<<"INFORME VALOR [-1] PARA SAIR";
	
	
	do{
	cout<<"\nInforma o valor desejado: ";
	cin>>valor;
	
	cout<<"\nO valor de "<<valor<<"! fatorial � "<<fatorial(valor)<<endl;
     }while(valor>0);
	    
	return 0;
}
