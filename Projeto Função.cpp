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
 
 	void funLado(int num, char uuu){
 		
		for(int i=0;i<num;i++){
 		cout << uuu << endl; 	
		 }
 		
 		
	 }
 
int main(int argc, char** argv) {
	
	int num=0;
	char simb;
	
	cout << " Informe o numero: " << endl;
        cin >> num;
        
	cout << " Informe um caracter especial: " << endl;
        cin >> simb;
        
    funLado(num,simb);
	
	return 0;
}

