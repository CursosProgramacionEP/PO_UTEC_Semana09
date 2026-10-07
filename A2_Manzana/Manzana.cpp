//
// Created by Carlos Palomino Vidal on 6/10/26.
//

#include "Manzana.h"
#include <iostream>
using namespace std;

Manzana::Manzana(int peso,const string& color) {
    this->peso=peso;
    this->color=color;
}

int Manzana::get_peso() const {
    return peso;
}

string Manzana::get_color() const {
    return color;
}

void Manzana::set_peso(int peso) {
    this->peso=peso;
}

void Manzana::set_color(const string& color) {
    this->color=color;
}

void Manzana::mostrar() const {
    cout<<"Peso: "<<peso<<endl;
    cout<<"Color: "<<color<<endl;
}