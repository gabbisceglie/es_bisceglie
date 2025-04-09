#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Inserisci un numero intero positivo: ";
        cin >> n;
    } while (n < 0);

    for (int i=1; i<n; i++) {
        if (i % 5 == 0) {
            //cout << "Ciao!" << endl;
            cout << "      __o" << endl;
            cout << "   _ \\<,_ " << endl;
            cout << "  (*)/ (*)" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}