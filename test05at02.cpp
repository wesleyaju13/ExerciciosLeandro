#include<iostream>
#include <locale.h>
using std::cout;
using std::cin;
using std::endl; 

float media(float soma,int quantidade){
  return (soma/quantidade);	
}
main(){setlocale(LC_ALL,"Portuguese");

	float valor, valorAX, resultado;
	int cont=0;


    cout<<"Progrmaa que leia um n�mero n�odeterminado\nde valores e retorna a m�dia aritm�tica\n";
	do{
	cout<<"Informe o Nota ["<<cont+1<<"] do aluno:";
	cin>>valor;
	valorAX = valor + valorAX;
	cont++;
    }while(valor > 0);
    
    resultado = media(valorAX,cont-1);

	cout<<"\n\n Valor total � "<<valorAX<<endl;
	cout<<"\n M�dia aritm�tica � "<<resultado<<endl;
	return 0;
}
