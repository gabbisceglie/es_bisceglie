#include <iostream>
using namespace std;

// Funzione per verificare se l'anno inserito è valido
int anno_valido (int &anno) {
do{
        cout << "Inserisci un anno: ";
        cin >> anno;
} while (anno<=1900 and anno>=2025);

    return anno;
}

// Funzione per verificare se l'utente è maggiorenne o minorenne
void maggior_eta(int &anno) {
anno=2025- anno;
    if (anno >= 18) {
        cout << "Sei maggiorenne";
        cout << "Hai " << anno << " anni";
    } else {
        cout << "Sei minorenne";
        cout << "Hai " << anno << " anni";
    }
}

// Funzione principale
int main() {

int anno;
anno_valido(anno);

maggior_eta(anno);

    return 0;
}