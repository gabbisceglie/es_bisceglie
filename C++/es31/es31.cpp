#include <iostream>
using namespace std;

int sconto=20, somma=0;


int calcolo(int &somma, int &sconto, int prezzo) {
    somma+=prezzo-(prezzo*sconto/100);
    return somma;
}

int main() {

    int n_prodotti, prezzo;

    cout << "Inserisci il numero di prodotti acquistati: ";
    cin >> n_prodotti;

    for(int i=0; i<n_prodotti; i++) {
        cout << "Inserire prezzo prodotto: ";
        cin >> prezzo;
        calcolo (somma, sconto, prezzo);
    }

    cout << "La somma di tutti i prodotti scontati e' " << somma;

    return 0;
}