#include <iostream>
using namespace std;

int main() {

int moltiplicatore, moltiplicando, prodotto=0;

//Inserimento del moltiplicatore e del moltiplicando interi positivi
do {
    cout << "Inserisci il moltiplicatore: ";
    cin >> moltiplicatore;
}while(moltiplicatore <= 0);

do {
    cout << "Inserisci il moltiplicando: ";
    cin >> moltiplicando;
}while(moltiplicando <= 0);

//Calcolo del prodotto

for (int i=0; i < moltiplicatore; i++) {
    prodotto += moltiplicando;
}

//Stampa del risultato
cout << "Il prodotto e': " << prodotto;



    return 0;
}

// moltiplicatore = 5; moltiplicando = 6; prodotto = 6+6+6+6+6 = 30;