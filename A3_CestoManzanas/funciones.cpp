//
// Created by Carlos Palomino Vidal on 6/10/26.
//

#include "funciones.h"

#include <iostream>
using namespace std;

void ingresar_entero_positivo(int *n) {
    do {
        cout<<"Ingrese un numero: ";
        cin>>*n;
    }while(*n <= 0);
}

Manzana manzana_random() {
    int peso= 50 + rand() % 301;
    int color_random=1+rand()%2;
    string color=color_random==1?"\U0001F34E":"\U0001F34F";
    //string color=color_random==1?"Rojo":"Verde";
    return Manzana(peso,color);
}

vector<Manzana> llenar_cesto(int n) {
    vector<Manzana> cesto;
    for (int i=0;i<n;i++){
        cesto.push_back(manzana_random());
    }
    return cesto;
}

void mostrar_cesto(vector<Manzana> cesto) {
    cout<<"Cesto de manzanas:"<<endl;
    for (int i=0;i<cesto.size();i++){

        cout<<"Manzana "<<i+1<<endl;
        cesto[i].mostrar();
    }
}
