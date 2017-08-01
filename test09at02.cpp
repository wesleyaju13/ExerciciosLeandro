#include<iostream>
#include <locale.h>
using std::cout;
using std::cin;
using std::endl; 

bool postounegat(int valor){	
	if(valor >= 0){		
		return true;
	}else{	
		return false;	
	}
}

main(){
	setlocale(LC_ALL,"Portuguese");
	int valor;
	char continuar = 's';
	
	
	cout<<"\nPrograma idetifica se numero é positivo ou negativo em Booleano\n";
	do{
	cout<<"Pls. Informe valor: ";
	cin>>valor;	
	//postounegat(valor);
    cout<<"Resultado = "<<postounegat(valor);
    
	cout<<"\nDeseja continuar[s/n]: ";
	cin>>continuar;
     }while(continuar != 'n');
	
	
	

return 0;	
}
