#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a;
    char letteraCambiata;

    cin >> a;
    bool lettera = verificatore(a);
    if(lettera==true)
    {
        char letteraCambiata = convertitore(a);
        cout << letteraCambiata;
    }
    else {
        cout << "errore" << endl;
    }
    return 0;
}
