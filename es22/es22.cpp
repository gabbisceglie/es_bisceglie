#include <iostream>
using namespace std;

int main() {

    int n, somma=0;
    
    do {
        cout << "Inserisci un numero intero positivo: ";
        cin >> n;
} while(n<=0);

//calcolo la somma dei numeri dispari tra 1 e n

do {
    if(n%2!=0) {
        somma+=n;
    }
    n--;
} while(n>0);

cout << somma;


    return 0;
}