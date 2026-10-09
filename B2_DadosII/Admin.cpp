//
// Created by Carlos Palomino Vidal on 9/10/26.
//

#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin() {
    cout<<"Inicio del juego del Dado"<<endl;
}

Admin::~Admin() {
    cout<<"Fin del juego del Dado"<<endl;
}

bool Admin::preguntar() {
    char c;
    cout<<"¿Deseas lanzar el dado? (s/n): ";
    cin>>c;
    return c == 's' || c == 'S';
}
