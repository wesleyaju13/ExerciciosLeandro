#include<iostream>
#include <locale.h>
#include<math.h>
using std::cout;
using std::cin;
using std::endl; 

int potencia(int base,int expoente){
	return(	pow(base,expoente));	
}


main(){setlocale(LC_ALL,"Portuguese");

//Fun��o pot�ncia
	int valor, pot;
	
	cout<<"Programa que calcula o valor de numero ^ pot�ncia\n";
	cout<<"Infome o valor:";
	cin>>valor;
	cout<<"Infome a pot�ncia:";
	cin>>pot;
	
	cout<<"\nValor de "<<valor<<"^"<<pot<<" � igual: "<<potencia(valor, pot)<<endl;

return 0;
}
