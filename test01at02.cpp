#include <iostream>
#include <iomanip>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl; 
using std::setw; 
//Aluno:Wagner Santos Prata 
/*1 - Fa�a um programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero m�ximo (no exemplo, 9). Este n�mero deve ser sempre �mpar.

1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5  
*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    int valor;
    int b;
    int c;//Coluna
    int l;//Linha

    cout<<"Informe o valor [O valor informada n�o poder� ser par]: ";
    cin>>valor;//Entrada de Valor 
    printf("\n\n");
    
    if (valor % 2 ==0){
       cout<<"Valor Invalido";//Tratamento      
       
	}else{

        // b = valor; 
        b =(valor+1)/2;
         cout<<" ";
         for( c =0; c< b; c++){
              for (l=0; l< valor-c; l++){
                  if((l>=c)&& (l<valor)){
                  	cout<< l+1;
				  }else{
				  	cout<<" ";
				  }

              }
              printf("\n ");
         }                  
    }
	
}
