//
// Created by Carlos Palomino Vidal on 6/10/26.
//

#include "Candado.h"

#include <cstdlib>
#include <iostream>

using namespace std;

Candado::Candado() {
    clave=rand()%10000+1;
    abierto=false;
}

void Candado::imprimir() {
    if (abierto) {
        cout << "El candado esta abierto" << std::endl;
    } else {
        cout << "El candado esta cerrado" << std::endl;
    }
}

void Candado::cerrar() {
    abierto=false;
}

void Candado::abrir(int combinacion) {
    if (combinacion == clave) {
        abierto=true;
        cout<<"El candado esta abridto"<<std::endl;
    }else
    {
        abierto=false;
        cout<<"El candado esta cerrado"<<std::endl;
    }
}