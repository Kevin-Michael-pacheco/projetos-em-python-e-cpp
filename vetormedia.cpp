#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int v[5],media,cont=0,soma=0;
	for(int i=0;i<5;i++){
		cout<<"digite o numero"<<i+1<<":";
		cin >>v[i];
		soma=soma+v[i];
		cont=cont+1;
	}
	media=soma/cont;
	cout<<"a mdedia e "<<media<<endl;
	return 0;
		
	}

