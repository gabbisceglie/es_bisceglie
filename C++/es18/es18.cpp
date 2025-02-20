#include <iostream>
using namespace std;

int main() {

int num, n=0, pari=0;

do {
    cout << "Inserisci numero: ";
    cin >> num;

    if (num%2==0) {
       n++;
       pari++;
    } else {
        n++;
    }
    


    
} while(n!=5);

cout << "I numeri sono: " << pari;

    return 0;
}