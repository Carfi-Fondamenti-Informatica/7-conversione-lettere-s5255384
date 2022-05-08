#include<iostream>
#include"lib.h"

using namespace std;

int main() {

    char x;
    bool y;
    cin >> x;

    y = Carattere(x);

    if (y == true)
        cout << x << endl;
    else
        cout << "errore" << endl;

    return 0;

}
