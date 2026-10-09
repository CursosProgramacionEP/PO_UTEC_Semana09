//
// Created by Carlos Palomino Vidal on 8/10/26.
//

#include "Dado.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Dado::Dado() {
    valor = 0;
}

int Dado::get_valor() const {
    return valor;
}

void Dado::lanzar() {
    valor = rand() % 6 + 1;
}

void Dado::imprimir() const {
    switch (valor) {
        case 1:
            cout << "El dado ha salido:1 ⚀" << "\0x2680" << endl;
            break;
        case 2:
            cout << "El dado ha salido: ⚁" << endl;
            break;
        case 3:
            cout << "El dado ha salido: ⚂" << endl;
            break;
        case 4:
            cout << "El dado ha salido: ⚃" << endl;
            break;
        case 5:
            cout << "El dado ha salido: ⚄" << endl;
            break;
        case 6:
            cout << "El dado ha salido: ⚅" << endl;
            break;
        default:
            cout << "Valor del dado no válido." << endl;
    }
}
