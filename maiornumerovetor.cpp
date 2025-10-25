#include<iostream>
using namespace std;

int main(){
	int v[5],maior=0;
	for(int i=0;i<5;i++){
		cout<<"digite o numero "<<i+1<<":";
		cin >> v[i];
		if(v[i]>maior){
			maior=v[i];
		}
	}
	cout<<"o maior numero e : "<<maior<<endl;
	return 0;
	
}
