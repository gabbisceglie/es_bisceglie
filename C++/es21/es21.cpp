#include <iostream>
using namespace std;

int main() {

    float prezzo, somma=0, finale;
    int n_prodotti, n=0, sconto;

    cout << "Quanti prodotti hai acquistato? ";
    cin >> n_prodotti;

do {
    cout << "Inserire prezzo prodotto: ";
    cin >> prezzo;
    somma=somma+prezzo;
    n++;
} while(n_prodotti>n);

if(somma>=100) {
    finale=somma-(somma*20/100);
    sconto=20;
} 
else if(somma>50 and somma<100) {
    finale=somma-(somma*10/100);
    sconto=10;
} 
else if(somma<=50) {
    finale=somma;
    sconto=0;
}

cout << "Il prezzo da pagare senza sconto e' " << somma;

if(sconto!=0) {
    cout << "\nIl prezzo da pagare con lo sconto e' " << finale;
    cout << "\nLa percentuale di sconto applicata e' " << sconto << "%";
} else {
    cout << "\nLo sconto non e' stato applicato";
}


    return 0;
}