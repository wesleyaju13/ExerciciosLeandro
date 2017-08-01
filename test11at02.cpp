#include<iostream>
#include<locale.h>
using std::cout;
using std::cin;
using std::endl;


float valorS(float n){
	float s=1;
	
	for(int i=2;i<=n;i++){
	s = (s+(1/n));
	}
	return (s);
}


int main(){
	setlocale(LC_ALL,"portuguese");
	
    float n;
	
	cout<<"Programa que informa o resultado de S"<<endl;
	cout<<"PLS. informe o valor de N: ";
	cin>>n;
	if(n>=0){
	cout<<valorS(n);	
	
        	}else{
        		cout<<"OPSS!!  O Programa só aceitar valores positivos\n";
			}
	
	
	return 0;
}
