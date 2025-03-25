#include <iostream>
using namespace std;

int main() {

    int n, somma=0;

do {
    cout << "Inserisci un numero: ";
    cin >> n;
} while(n<=0);

do {
    somma+=(n*n);
    n--;
} while (n>0);

cout << "La somma dei quadrati e': " << somma;

    return 0;
}