#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int op;
	cout<< "1-somar dois n�meros\n 2-calcular a media de dois numeros\n 3-dobrar um numero\n 4-sair\n digite a op��o desejada: ";
	cin >> op;
	switch(op){
		case 1:
			cout <<"voc� escolheu somar dois numeros"<<endl;
			break;
		case 2:
			cout << "voc� escolheu calcular a media de dois numeros"<<endl;
			break;
		case 3:
			cout << "voc� escolheu dobrar um numero"<<endl;
			break;
		case 4:
			cout << "voc� escolheu sair"<<endl;
			break;
		default:
			cout <<"op��o invalida"<<endl;
	}
	return 0;

}
