#ifndef A3_CESTOMANZANAS_FUNCIONES_H
#define A3_CESTOMANZANAS_FUNCIONES_H

#include "Manzana.h"
#include <vector>

void ingresar_entero_positivo(int*);
Manzana manzana_random();
std::vector<Manzana> llenar_cesto(int);
void mostrar_cesto(std::vector<Manzana>);

#endif //A3_CESTOMANZANAS_FUNCIONES_H
