#include <iostream>
using namespace std;

int main() {
    int i, num, i2=0, ni=0, n;

cout << "Quanti numeri vuoi inserire? ";
cin >> i;

cout << "Quale numero vuoi contare? ";
cin >> n;

do {

cout << "Inserire numero: ";
cin >> num;

if (num==n) {
    ni++;
}

i2++;

} while (i>i2);

cout << "Il numero " << n << " appare " << ni << " volte";

    return 0;
}