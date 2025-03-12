#include <iostream>
using namespace std;

int main() {

    int n, somma = 0;

    do {
        cout << "Inserisci un numero intero positivo: ";
        cin >> n;
} while (n<=0);

// calcolo la somma dei numeri dispari tra 1 e n
    for (int i=1; i<=n; i++) {
        if (i%2!=0) {
        somma+=i;
    }
}

    cout << "La somma dei numeri dispari tra 1 e " << n << " e' " << somma;

    return 0;
}