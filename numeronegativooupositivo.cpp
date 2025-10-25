#include <iostream>
using namespace std;

int main() {
    int n1;
    char i = 's'; 

    while (i == 's' || i == 'S') { 
        cout << "Digite um numero: ";
        cin >> n1;

        if (n1 > 0) {
            cout << "O numero digitado é positivo." << endl;
        } else if (n1 < 0) {
            cout << "O numero digitado é negativo." << endl;
        } else {
            cout << "O numero digitado é zero." << endl;
        }

        cout << "Digite 's' para continuar ou 'n' para parar o programa: ";
        cin >> i;
    }

    cout << "Programa encerrado!" << endl;
    return 0;
}

