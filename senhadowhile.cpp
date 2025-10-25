#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int senha;
	do {
		cout<<"digite  a senha[1234]";
		cin >> senha;
	}while(senha != 1234 );
	cout << "Acesso permitido!"<< endl;
	return 0;
}
