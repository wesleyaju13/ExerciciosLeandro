#include<iostream>
#include <locale.h>
#include<math.h>
using std::cout;
using std::cin;
using std::endl; 

void pontosQualificacao(float media){
	
	if((media >= 90)&&(media <= 100)){
	cout<<"\nRetorna 4";          }
	if((media >= 80)&&(media <= 89)){
	cout<<"\nRetorna 3";         }
	
	if((media >= 70)&&(media <= 79)){
	cout<<"\nRetorna 2";         }	
	
	if((media >= 60)&&(media <= 69)){
	cout<<"\nRetorna 1";         }
	
	if(media < 60){
	cout<<"\nRetorna 0";       }
	cout<<"\n";	
	
}


main(){setlocale(LC_ALL,"Portuguese");

 float n1, n2, n3, media, soma;
 
 cout<<"Nota de alunos\n";
 cout<<"Pls. informe a nota[1ª] do aluno:";
 cin>>n1;
 cout<<"Pls. informe a nota[2ª] do aluno:";
 cin>>n2;
 cout<<"Pls. informe a nota[3ª] do aluno:";
 cin>>n3;

	soma = n1+n2+n3;
	media =soma/3;
	
 cout<<"\nSoma das notas é "<<soma;
 cout<<"\nMédia do aluno é "<<media;
 cout<<"\n";
 pontosQualificacao(media);
 
/*	if((media >= 90)&&(media <= 100)){
	cout<<"\nRetorna 4";          }
	if((media >= 80)&&(media <= 89)){
	cout<<"\nRetorna 3";         }
	
	if((media >= 70)&&(media <= 79)){
	cout<<"\nRetorna 2";         }	
	
	if((media >= 60)&&(media <= 69)){
	cout<<"\nRetorna 1";         }
	
	if(media < 60){
	cout<<"\nRetorna 0";       }
	cout<<"\n";	
*/
return 0;		
		
}



