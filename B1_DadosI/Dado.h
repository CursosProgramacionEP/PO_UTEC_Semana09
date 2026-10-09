//
// Created by Carlos Palomino Vidal on 8/10/26.
//

#ifndef B1_DADOSI_DADO_H
#define B1_DADOSI_DADO_H


class Dado {
private:
    int valor;
public:
    Dado();
    int get_valor() const;
    void lanzar();
    void imprimir() const;
};


#endif //B1_DADOSI_DADO_H
