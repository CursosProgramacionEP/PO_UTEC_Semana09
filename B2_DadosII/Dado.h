//
// Created by Carlos Palomino Vidal on 9/10/26.
//

#ifndef B2_DADOSII_DADO_H
#define B2_DADOSII_DADO_H


class Dado {
private:
    int valor;
public:
    Dado();
    int get_valor() const;
    void lanzar();
    void imprimir() const;
};


#endif //B2_DADOSII_DADO_H
