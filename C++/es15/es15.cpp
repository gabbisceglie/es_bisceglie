#include <iostream>
using namespace std;

int main() {

    int num, media, n = 0, somma = 0;

do {
    cout << "Inserisci un numero a piacere: ";
    cin >> num;

    if(num>0) {
        somma+=num;
        n++;
    }
} while (num!=0);

if(somma==0) {
    cout << "Non sono stati inseriti numeri positivi, pertanto somma e media non verrano visualizzati";
} else {
cout << "La media dei numeri positivi inseriti e': " << (media=somma/n) << endl;

}
    return 0;
}