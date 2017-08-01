
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int numero, maior=0;
    do{
        cout << " Informe o numero: " << endl;
        cin >> numero;
        if (numero>maior){
            maior = numero;
        }
    }while(numero!=-1);
    if (maior>0){
        cout << " O maior numero eh: " << maior << endl;
    }else{
    	cout <<">>>> Numero menor que zero nao eh permitido <<<<" << endl; 
	}
    return 0;
}
