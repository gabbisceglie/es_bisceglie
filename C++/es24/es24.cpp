#include<iostream>
using namespace std;

int main()
{
    int sommaQuad=0, i, n;
 do{   
    cout << "Inserisci un numero intero positivo: " << endl;
    cin >> n;
 } while(n<1);
 //_______________________
 for(i=1; i<=n; i++) {
  sommaQuad+=(i*i);
 }
 
    
    cout << "La somma dei quadrati e' " << sommaQuad;
    
    
    return 0;
}