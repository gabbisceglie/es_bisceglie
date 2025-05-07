#include <iostream>
using namespace std;

int n1;

int somma(int n1) {
    int n2;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;
    cout << "La somma dei due numeri e': " << n1 + n2;
    return 0;
}

int main () {
    cout << "Inserisci il primo numero: ";
    cin >> n1;

    somma(n1);
}