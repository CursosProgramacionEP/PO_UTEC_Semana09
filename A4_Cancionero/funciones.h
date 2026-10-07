//
// Created by Carlos Palomino Vidal on 6/10/26.
//

#ifndef A4_CANCIONERO_FUNCIONES_H
#define A4_CANCIONERO_FUNCIONES_H
#include <vector>
#include <iostream>

#include "Cancion.h"
Cancion ingresarCancion();
void guardarCancion(std::vector<Cancion> &canciones, const Cancion &c);
void imprimirCancion(const std::vector<Cancion> &canciones);
#endif //A4_CANCIONERO_FUNCIONES_H
