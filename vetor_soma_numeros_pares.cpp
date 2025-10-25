#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>vet;
	int soma=0,n;
	while(true){
		cout<<"digite um numero pro vetor(digite 0 para parar de digitar) : ";
		cin>> n;
		if(n==0)break;
		vet.push_back(n);
		if(n%2==0){
			soma=soma+n;
		}
	}
	cout<<"a soma de todos numeros pares e de "<<soma<<endl;
	return 0;
} 
