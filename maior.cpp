#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int a,b;
	setlocale(LC_ALL,"portuguese");
	cout <<"digite o primeiro numero: ";
	cin >> a;
	cout << "digite o segundo numero :";
	cin >> b;
	

	
	if (a > b){
		cout << "o numero "<<a<<" e maior "<<endl;
		
	} else if (a<b) {
		cout << "o numero" << b<<" e maior "<<endl;
	}
		else {
		cout <<"os dois numeros são iguais"<<endl;
		}
	
return 0;
}
