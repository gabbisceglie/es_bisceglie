#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Inserisci un numero intero positivo: ";
        cin >> n;
    } while (n < 0);

    cout << "I quadrati perfetti fino a " << n << " sono: ";

    for (int i = 1; i*i<=n; i++) {
        cout << i*i << " "; // Stampa il quadrato perfetto
    }
    
    return 0;
}