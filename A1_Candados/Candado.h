//
// Created by Carlos Palomino Vidal on 6/10/26.
//

#ifndef A1_CANDADOS_CANDADO_H
#define A1_CANDADOS_CANDADO_H


class Candado {
    public:
        int clave;
        bool abierto;
        Candado();
        void abrir(int combinacion);
        void cerrar();
        void imprimir();

};


#endif //A1_CANDADOS_CANDADO_H
