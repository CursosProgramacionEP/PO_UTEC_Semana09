//
// Created by Carlos Palomino Vidal on 9/10/26.
//

#ifndef B3_BINARIOS_NUMEROBINARIO_H
#define B3_BINARIOS_NUMEROBINARIO_H


class NumeroBinario {
    private:
        static const int N=64;
        int bits[N];
        /*bits[0] es el bit menos significativo*/
        /*bits[N-1] es el bit más significativo*/
    public:
        NumeroBinario();
        void imprimir();
        bool asignar(int posicion);
        void incrementar();
};


#endif //B3_BINARIOS_NUMEROBINARIO_H
