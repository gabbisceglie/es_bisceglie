#include <iostream>
using namespace std;

int main () {
    int n;
    int div=2;

do {
    cout << "Inserisci numero (maggiore di 0): ";
    cin >> n;
} while(n <= 0);

while (div <= n) {
    if(n%div==0) {
        break;
    }
    div++;
}

if(div == n) {
    cout << "Il numero inserito ("<<  n << ") e' primo!!";

//(questo if è orrendo lo so xD)
} else if(n==1) {
    cout << "Il numero inserito ("<<  n << ") e' primo!!";

} else {
    cout << "Il numero inserito ("<<  n << ") non e' primo!!";
}


    return 0;
}