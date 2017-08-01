/* 
 * File:   main.cpp
 * Author: Wesley Cristian Santos Almeida
 *
 * Created on 9 de Julho de 2017, 22:47
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int num1=0, num2=0, num3=0, num4=0, maior=0;
    
    do{

    cout << " >>>> Qual o Maior Numero da Sequencia a Seguir? <<<<" << endl << endl << endl;
    
    cout << "Informe o primeiro numero: " << endl;
    cin >> num1;
    
    cout << "Informe o segundo numero: " << endl;
    cin >> num2;
    
    cout << "Informe o terceiro numero: " << endl;
    cin >> num3;
    
    cout << "Informe o quarto numero: " << endl;
    cin >> num4;
    
    cout << "Os Numeros Digitados foram: " << num1 <<", " << num2 <<", " << num3 << " e "<< num4 << endl << endl << endl;
    
    if(num1 > num2){
        maior=num1;     
    }else {
        maior=num2;
    }
        
    if(maior > num3){
        maior=maior;
    }else{
        maior=num3;
    }
    
    if(maior > num4){
        maior=maior;
    }else{
        maior=num4;
    }   
   	}while (maior!=-1);
   	if (maior>0){
        cout << " O maior numero eh: " << maior << endl;
    }else{
    	cout <<">>>> Numero menor que zero nao eh permitido <<<<" << endl; 
	}
        
    return 0;
}

