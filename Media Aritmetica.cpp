#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
float mediaArit(float n1, float n2, float n3){
	 return (n1+n2+n3)/3;
}

int main (int argc, char** argv) {
	
	float nota1, nota2, nota3, media;
	string name;
	
	cout << "Digite o nome do Aluno: \n \n";
	cin >> name;
	
	cout << "Digite a Primeira Nota do Aluno: \n \n";
	cin >> nota1;
	
	cout << "Digite a Segunda Nota do Aluno: \n \n";
	cin >> nota2;
	
	cout << "Digite a Terceira Nota do Aluno: \n \n";
	cin >> nota3;
	
	media = mediaArit(nota1, nota2, nota3);
	
	cout << "\n A Media Aritmetica do Aluno eh: " << media;
	
    return 0;
} 
