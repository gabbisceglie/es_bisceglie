#include <iostream>
using namespace std;

int main() {

float num, media, n = 0, somman = 0, sommap = 0, max, min;

do {
    cout << "Inserire un numero a piacere:";
    cin >> num;
//inizializzazione max e min
    if(n==0) {
        max = num;
        min = num;
    }
//somma positiva e negativa
    if(num>0) {
        sommap = sommap + num;
        n++;
    } else {
        somman = somman + num;
    }
//maggiore
    if(num>max) {
        max = num;
    }
//minore
    if(num<min) {
        if(num==0) { 
        } else {
            min = num;
        }
    }
}
while (num!=0);

        cout << "-----------------------------------" << endl;
    if(n==0) {
        cout << "Non e' stato inserito alcun numero positivo o negativo!" << endl;
    } else {
        media = sommap/n;   

            cout << "La media dei numeri positivi e': " << media << endl;
            cout << "La somma dei numeri negativi e': " << somman << endl;
            cout << "Il numero maggiore e': " << max << endl;
            cout << "Il numero minore e': " << min << endl;
    }

    return 0;
}