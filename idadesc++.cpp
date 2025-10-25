#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	int idade;
	setlocale(LC_ALL,"portuguese");
	cout << "digite sua idade : ";
	cin >> idade;
	
	if (idade<12){
		cout<<"criança"<<endl;
	}
	else if (idade>=12 && idade <=17) {
		cout<< "adolecente"<<endl;
	}
	else if (idade>=18 && idade <=59){
		cout<< "adulto"<<endl;
	}
	else if (idade>=60){
		cout << "idoso"<<endl;
	}
	return 0;
}
