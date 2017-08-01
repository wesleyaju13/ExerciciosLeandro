#include<iostream>
#include<locale.h>
using std::cout;
using std::cin;
using std::endl;

void ParouImpar(int valor){
	if(valor%2 == 0){
		cout<<"O Valor "<<valor<<" é um numero PAR"<<endl;
	}else{
		cout<<"O Valor "<<valor<<" é um numero IMPAR"<<endl;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	char SimouNao = 's';
	
	
	cout<<"\nPrograma idetifica se numero é par ou impar em Booleano\n";
	do{
	cout<<"\nPLS. informe o valor desejado: ";
	cin>>valor;
	ParouImpar(valor);
	cout<<"\nDeseja repitir [s/n]: ";
	cin>>SimouNao;
	cout<<"\n";
      }while(SimouNao != 'n');
		
	return 0;
}
