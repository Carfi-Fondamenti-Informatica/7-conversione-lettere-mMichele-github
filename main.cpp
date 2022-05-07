#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a;
    char letteraCambiata;

    cout << "inserire una lettera: ";
    cin >> a;
    bool lettera = verificatore(a);
    if(lettera==true)
    {
        char letteraCambiata = convertitore(a);
        cout << "Lettera cambiata: " << letteraCambiata;
    }
    else {
        cout << "errore" << endl;
    }
    return 0;
}
