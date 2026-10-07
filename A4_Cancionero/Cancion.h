//
// Created by Carlos Palomino Vidal on 6/10/26.
//

#ifndef A4_CANCIONERO_CANCION_H
#define A4_CANCIONERO_CANCION_H
#include <string>


class Cancion {
private:
    std::string titulo;
    std::string artista;
    int duracion; // en segundos
    std::string letra;
public:
    Cancion(const std::string& titulo, const std::string& artista, int duracion, const std::string& letra);
    Cancion();
    std::string get_titulo() const;
    void set_titulo(const std::string& titulo);
    std::string get_artista() const;
    void set_artista(const std::string& artista);
    void set_duracion(int duracion);
    int get_duracion() const;
    void set_letra(const std::string& letra);
    std::string get_letra() const;
    void imprimir_cancion() const;
};


#endif //A4_CANCIONERO_CANCION_H
