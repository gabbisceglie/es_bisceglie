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

do {
    cout << "\nLa partita dura 10 round, buona fortuna! \nInserisci " << "1" << " per iniziare la partita: ";
    cin >> i;
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

    cout << "\n1) Sasso\n2) Carta\n3) Forbici\nSeleziona un opzione:";
    cin >> i;

switch (i) {
    case 1:
        cout << "Hai scelto 'Sasso' \n---------------------------------------------------------";
    if (mossa == 1) {
        cout << "\nPareggio!";
        cout << "\nIl tuo avversario aveva scelto: " << mossa2;
        p1++;
        p2++;
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
        p1++;
        p2++;
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
        p1++;
        p2++;
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
    cout << "\n\nIl tuo punteggio: " << p1 << "\nIl punteggio del tuo avversario: " << p2;

    return 0;
}



//da sistemare, conta il round anche se scelgo un opzione diversa da 1/2/3