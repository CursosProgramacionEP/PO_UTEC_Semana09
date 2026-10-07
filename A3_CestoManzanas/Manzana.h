//
// Created by Carlos Palomino Vidal on 6/10/26.
//

#ifndef A2_MANZANA_MANZANA_H
#define A2_MANZANA_MANZANA_H
#include <string>


class Manzana {
    private:
        int peso;
        std::string color;
    public:
        Manzana(int peso,const std::string& color);
        int get_peso() const;
        std::string get_color() const;
        void set_peso(int peso);
        void set_color(const std::string& color);
        void mostrar() const;
};


#endif //A2_MANZANA_MANZANA_H
