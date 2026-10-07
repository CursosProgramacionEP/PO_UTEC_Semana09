//
// Created by Carlos Palomino Vidal on 6/10/26.
//

#include "funciones.h"
#include <vector>
#include <string>
#include "Cancion.h"

using namespace std;

Cancion ingresarCancion() {
    string titulo, artista, letra;
    int duracion;
    cout << "Ingrese el titulo de la cancion: ";
    getline(cin, titulo);
    cout << "Ingrese el artista de la cancion: ";
    getline(cin, artista);
    cout << "Ingrese la duracion de la cancion: ";
    cin >> duracion;
    cin.ignore(); // Ignorar el salto de linea
    cout << "Ingrese la letra de la cancion: ";
    getline(cin, letra);
    return Cancion(titulo, artista, duracion, letra);
}

void guardarCancion(std::vector<Cancion> &canciones, const Cancion &c) {
    canciones.push_back(c);
}

void imprimirCancion(const std::vector<Cancion> &canciones)  {
    for (const auto &c : canciones) {
        c.imprimir_cancion();
    }
}
