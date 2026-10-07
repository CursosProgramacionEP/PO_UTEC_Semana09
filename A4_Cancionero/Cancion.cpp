//
// Created by Carlos Palomino Vidal on 6/10/26.
//

#include "Cancion.h"
#include <iostream>
using namespace std;


Cancion::Cancion(const string& titulo, const string& artista, int duracion, const string& letra)
    : titulo(titulo), artista(artista), duracion(duracion), letra(letra) {
    //this->titulo = titulo;
    //this->artista = artista;
    //this->duracion = duracion;
    //this->letra = letra;
}
Cancion::Cancion() {}

string Cancion::get_titulo() const {return titulo;}
string Cancion::get_artista() const {return artista;}
int Cancion::get_duracion() const {return duracion;}
string Cancion::get_letra() const {return letra;}

void Cancion::set_titulo(const string& titulo) {
    this->titulo = titulo;
}
void Cancion::set_artista(const string& artista) {
    this->artista = artista;
}
void Cancion::set_duracion(int duracion) {
    this->duracion = duracion;
}
void Cancion::set_letra(const string& letra) {
    this->letra = letra;
}

void Cancion::imprimir_cancion() const{
    cout << "Titulo: " << titulo <<" ";
    cout << "Artista: " << artista << " ";
    cout << "Duracion: " << duracion << " segundos" << " ";
    cout << "Letra: " << letra << endl;
}