//
// Created by Carlos Palomino Vidal on 9/10/26.
//

#include "NumeroBinario.h"
#include <iostream>

using namespace std;


NumeroBinario::NumeroBinario() {
    for (int i = 0; i < N; ++i) {
        bits[i] = 0;
    }
}

void NumeroBinario::imprimir() {
    for (int i = N - 1; i >= 0; --i) {
        cout << bits[i];
    }
    cout << std::endl;
}

bool NumeroBinario::asignar(int posicion) {
    if (posicion < 0 || posicion >= N) {
        return false;
    }
    bits[posicion] = 1;
    return true;
}

void NumeroBinario::incrementar() {
    for (int i = 0; i < N; ++i) {
        if (bits[i] == 0) {
            bits[i] = 1;
            return;
        } else {
            bits[i] = 0;
        }
    }
}
