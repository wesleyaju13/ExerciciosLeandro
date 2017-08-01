/* 
 * File:   main.cpp
 * Author: Wesley Almeida
 *
 * Created on 17 de Julho de 2017, 23:27
 */

#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n, i, j, b;

    cout << " >>>>>> Digite o numero maximo do triangulo!!! <<<<<< " << endl;
    cout << "         Atencao, o numero deve ser impar: " << endl;
    cin >> n;
   
   while (n % 2 == 0) { 
      cout << "Erro. Informe o numero maximo do Triangulo [tem que ser Impar]: " << endl; 
      cin >> n; 
   } 
         b = (n + 1)/2;
         for( i=0; i<b; i++){
            for (j=0; j<n; j++){
                if(j>=i && j<n-i)
                 cout << j + 1;
                else
                 cout << " ";      
              }
            cout << "\n";
         }
    return 0;
}
 
