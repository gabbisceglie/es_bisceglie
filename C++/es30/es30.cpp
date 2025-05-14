#include <iostream>
using namespace std;

int sconto=20;

int calcolo(int prezzo, int sconto) {
    return prezzo-(prezzo * sconto / 100);
}

int main () {
    int prezzo;
    cout << "Inserire il  prezzo del prodotto: ";
    cin >> prezzo;

    cout << "Il prezzo finale con lo sconto e': " << calcolo(prezzo, sconto);
}