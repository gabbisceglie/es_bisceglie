#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int i; //inserito
    int mossa; //mossa casuale del pc
    int p1=0, p2=0, round=0; //punteggio
    string mossa2;

    //genera un opzione casuale tra 1 e 3
    srand(time(0));

    cout << "\n\tLa partita dura 10 round, buona fortuna! (esclusi pareggi)"; 
do {
    cout << "\n\nInserisci '1' per iniziare la partita: ";
    cin >> i;

    if(i != 1) {
        cout << "Errore! Inserisci " << "1" << " per iniziare la partita \n---------------------------------------------------------";
    }
} while (i != 1);


for (round = 0; round < 10; round++) {
    mossa = rand() % 3 + 1;

    if (mossa == 1) {
        mossa2 = "Sasso";
    } else if (mossa == 2) {
        mossa2 = "Carta";
    } else if (mossa == 3) {
        mossa2 = "Forbici";
    }

do {
    cout << "\n1) Sasso\n2) Carta\n3) Forbici\nSeleziona un opzione:";
    cin >> i;

    if(i < 1 || i > 3) {
        cout << "Errore! Inserisci un numero tra 1 e 3 \n---------------------------------------------------------";
    }
} while (i < 1 || i > 3);

switch (i) {
    case 1:
        cout << "Hai scelto 'Sasso' \n---------------------------------------------------------";
    if (mossa == 1) {
        cout << "\nPareggio!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        round--;
    } else if (mossa == 2) {
        cout << "\nHai perso!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        p2++;
        cout << "\nPunteggio: Utente: " << p1 << " Computer: " << p2 << "\n---------------------------------------------------------"; 
    } else if (mossa == 3) {
        cout << "\nHai vinto!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        p1++;
        cout << "\nPunteggio: Utente: " << p1 << " Computer: " << p2 << "\n---------------------------------------------------------";
    }
    break;
//____________________________________
    case 2:
        cout << "Hai scelto 'Carta'\n---------------------------------------------------------";
    if (mossa == 2) {
        cout << "\nPareggio!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        round--;
    } else if (mossa == 3) {
        cout << "\nHai perso!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        p2++;
        cout << "\nPunteggio: Utente: " << p1 << " Computer: " << p2 << "\n---------------------------------------------------------";
    } else if (mossa == 1) {
        cout << "\nHai vinto!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        p1++;
        cout << "\nPunteggio: Utente: " << p1 << " Computer: " << p2 << "\n---------------------------------------------------------";
    }
    break;
//____________________________________
    case 3:
        cout << "\nHai scelto 'Forbici'\n---------------------------------------------------------";
    if (mossa == 3) {
        cout << "\nPareggio!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        round--;
    } else if (mossa == 2) {
        cout << "\nHai vinto!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        p1++;
        cout << "\nPunteggio: Utente: " << p1 << " Computer: " << p2 << "\n---------------------------------------------------------";
    } else if (mossa == 1) {
        cout << "\nHai perso!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        p2++;
        cout << "\nPunteggio: Utente: " << p1 << " Computer: " << p2 << "\n---------------------------------------------------------";
    }
    break;
    }
}
    cout << "\n\tPARTITA TERMINATA!!";
    cout << "\n\tIl tuo punteggio: " << p1 << "\nIl punteggio del tuo avversario: " << p2;

    return 0;
}