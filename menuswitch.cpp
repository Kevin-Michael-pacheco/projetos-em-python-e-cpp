#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int op;
	cout<< "1-somar dois números\n 2-calcular a media de dois numeros\n 3-dobrar um numero\n 4-sair\n digite a opção desejada: ";
	cin >> op;
	switch(op){
		case 1:
			cout <<"você escolheu somar dois numeros"<<endl;
			break;
		case 2:
			cout << "você escolheu calcular a media de dois numeros"<<endl;
			break;
		case 3:
			cout << "você escolheu dobrar um numero"<<endl;
			break;
		case 4:
			cout << "você escolheu sair"<<endl;
			break;
		default:
			cout <<"opção invalida"<<endl;
	}
	return 0;

}
