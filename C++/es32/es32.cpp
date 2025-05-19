#include <iostream>
using namespace std;

//Controllo validità del voto
int voto_valido() {
    int voto;
    do {
        cout << "Inserisci il tuo voto: ";
        cin >> voto;
    } while (voto < 0 || voto > 10);
    return voto;
}

//Controllo sufficienza
void sufficienza(int voto, int& v_suff, int& v_insuff) {
    if (voto >= 6) {
        cout << "\tIl voto e' sufficiente.\n";
        v_suff++;
    } else {
        cout << "\tIl voto non e' sufficiente.\n";
        v_insuff++;
    }
}

//Funzione principale
int main() {
    int voto, v_suff = 0, v_insuff = 0;

    cout << "\nPer terminare il programma inserire 0!\n";

    do {
        voto = voto_valido();
        if (voto != 0)
            sufficienza(voto, v_suff, v_insuff);
    } while (voto != 0);

    cout << "\t\tProgramma terminato!\n";

    cout << "\nIl numero di voti sufficienti e': " << v_suff;
    cout << "\nIl numero di voti insufficienti e': " << v_insuff;

    return 0;
}