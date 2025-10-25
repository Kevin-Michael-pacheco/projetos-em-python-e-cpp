#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	string mensagem;
	char i = 's';
	while(i=='s'|| i=='S'){
		cout<<"digite uma mensagem : ";
		cin >>mensagem;
		cout<<mensagem<<endl;
		cout<<"digite's''para continuar ou 'n' para parar o programa : ";
		cin >> i;
	}
	
    return 0;
}
