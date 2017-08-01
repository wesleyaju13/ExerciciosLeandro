#include<iostream>
#include <locale.h>
using std::cout;
using std::cin;
using std::endl; 

int mdc(int valor1, int valor2){
	int resto;
	int mdc1=1;
	
	if(valor1 < valor2){
		for(int i=2; i<= valor1; i++){
			if((valor1 % i) == 0 && (valor2 % i) == 0){
			   mdc1 = i;	
			}			
		}
	}
	return (mdc1);
}

int main(){ setlocale(LC_ALL,"Portuguese");

 float n1, n2, result;
 
 cout<<"Máximo número divisor de dois inteiro\n";
 cout<<"Pls. informe a Primeiro valor: ";
 cin>>n1;
 cout<<"Pls. informe a Segundo valor: ";
 cin>>n2;
 
 result = mdc(n1,n2);
 cout<<"MDC de "<<n1<<" e "<<n2<<" e igual "<<result<<endl;
 
return 0;		
		
}
