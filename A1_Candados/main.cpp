#include <iostream>

#include "Candado.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {

    int clave;
    Candado c= Candado();
    cout << "Ingrese la clave del candado: ";
    cin >> clave;
    c.abrir(clave);
    c.imprimir();
    return 0;

 }