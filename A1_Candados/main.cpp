#include <iostream>

#include "Candado.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {

    int clave;
    Candado c= Candado();
    cout << "Ingrese la clave del candado: ";
    cin >> clave;

    for (int i = 0; i < 9999; i++) {
        c.abrir(i);
        if (c.abierto) {
            cout << "La clave correcta es: " << i << endl;
            break;
        }
    }



 //   c.abrir(clave);
    c.imprimir();
    return 0;

 }