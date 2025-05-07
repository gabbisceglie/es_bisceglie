#include <iostream>
using namespace std;

//Funzione che calcola il quadrato di un numero
    void calcolo(int n) {
        cout << "Il quadrato di " << n << " e': " << n * n;
    }

int main() {

    int n;

    //Richiesta di un numero intero all'utente
    cout << "Inserisci un numero intero: ";
    cin >> n;

    //Richiamo la funzione per calcolare il quadrato
    calcolo(n);

    return 0;
}