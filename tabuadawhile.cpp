#include<iostream>
using namespace std;

int main(){
	int n,mult,i = 1 ;
	cout << "digite um numero para ser feito a tabuada";
	cin >> n;
	while(i < 11){
		mult= i * n;
		cout << mult <<endl;
		i++;	
	}
	return 0;
}
