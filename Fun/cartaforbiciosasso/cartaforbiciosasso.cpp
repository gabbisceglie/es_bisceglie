#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int i; //inserito
    int mossa; //mossa casuale del pc
    string mossa2;

//genera un opzione casuale tra 1 e 3
srand(time(0));
mossa = rand() % 3 + 1;

if(mossa==1) {
    mossa2 = "Sasso";
} else if(mossa==2) {
    mossa2 = "Carta";
} else if(mossa==3) {
    mossa2 = "Forbici";
}

do {
cout << "\n Inserisci '1' per iniziare la partita: ";
cin >> (i);
} while (i!=1); {

}
if (i==1) {
    cout << "\n1)Sasso\n2)Carta\n3)Forbici\nSeleziona un opzione:";
}
cin >> i;
switch (i) {
    case 1:
    cout << "Hai scelto 'Sasso'";
    if(mossa==1) {
        cout << "\nPareggio!";
        cout << "\n Il tuo avversario aveva scelto: " << mossa2;
    } else if (mossa==2) {
        cout << "\nHai perso!";
        cout << "\n Il tuo avversario aveva scelto: " << mossa2;
    } else if (mossa==3) {
        cout << "\nHai vinto!";
        cout << "\n Il tuo avversario aveva scelto: " << mossa2;
    }
    break;
    //____________________________________
    case 2:
    cout << "Hai scelto 'Carta'";
    if(mossa==2) {
        cout << "\nPareggio!";
        cout << "\n Il tuo avversario aveva scelto: " << mossa2;
    } else if(mossa==3) {
        cout << "\nHai perso!";
        cout << "\n Il tuo avversario aveva scelto: " << mossa2;
    } else if(mossa==1) {
        cout << "\nHai vinto!";
        cout << "\n Il tuo avversario aveva scelto: " << mossa2;
    }
    break;
    //____________________________________
    case 3:
    cout << "\nHai scelto 'Forbici'";
    if (mossa==3) {
        cout << "\nPareggio!";
        cout << "\n Il tuo avversario aveva scelto: " << mossa2;
    } else if(mossa==2) {
        cout << "\nHai vinto!";
        cout << "\n Il tuo avversario aveva scelto: " << mossa2;
    } else if(mossa==1) {
        cout << "\nHai perso!";
        cout << "\n Il tuo avversario aveva scelto: " << mossa2;
    }
    break;
    }

    return 0;
}