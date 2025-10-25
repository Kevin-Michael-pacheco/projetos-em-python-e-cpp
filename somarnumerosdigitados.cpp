#include<iostream>
using namespace std;

int main(){
	int n,soma = 0;
	while(n >= 0){
		cout << "digite um numero";
		cin >> n;
		if(n>0){
			soma = soma + n;
		}
	
		
	}
	cout << "o valor da soma de todos os numeros digitados e de : "<<soma<<endl;
	return 0;
}
