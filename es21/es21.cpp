#include <iostream>
using namespace std;

int main() {

    int prodotti;

    cout << "QUanti prodotti hai acquistato?";
    cin >> prodotti;




    return 0;
}



/* Problema:
Redigi un diagramma di flusso che segua questi passaggi:

1. Chiedere all'utente quanti prodotti ha acquistato.

2. Per ogni prodotto, chiedere il prezzo e sommarlo al totale.

3. Calcolare il totale finale:
    o Se il totale supera i 100€, applicare uno sconto del 20%.
     o Se il totale è tra 50€ e 100€, applicare uno sconto del 10%.
    o Se il totale è inferiore a 50€, non applicare alcuno sconto.

4. Stampare i seguenti messaggi:
    o Il totale senza sconto.
    o Il totale con sconto, se applicabile.
    o L&#39;importo dello sconto, se presente. */