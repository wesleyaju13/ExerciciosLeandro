#include <iostream>
#include <string>

using namespace std;

main(){
	float alt, peso, imc;
	string name;
	
	cout << "Qual o nome do Paciente? " << endl;
	cin >> name;
	cout << "Qual eh a Altura? " << endl;
	cin >> alt;
	cout << "Qual eh o Peso? " << endl;
	cin >> peso;
	
	imc = peso/(alt*alt);
	
	cout << "Nome do Paciente: " << name << endl;
	cout << "Altura = " << alt << " metros"<< endl;
	cout << "Peso = " << peso << " kg " << endl;
	cout << "O IMC do Paciente eh: " << imc << endl << endl;
	
return 0;

}
