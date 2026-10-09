#include <iostream>

#include "Dado.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
    /*
    srand(time(nullptr));
    int dado;
    char c;
    bool lanzar=false;

    do {
        cout << "Lanzar el dado? (s/n): ";
        cin >> c;
        lanzar=(c=='s');
        if (lanzar) {
            dado=rand()%6+1;
            cout << "El dado ha salido: " << dado << endl;
        }
    }while (lanzar);

    cout << "FIN"<<endl;
 */
    srand(time(nullptr));
    Dado dado=Dado();
    bool lanzar=false;
    char c;
    do {
        cout << "Lanzar el dado? (s/n): ";
        cin >> c;
        lanzar=(c=='s');
        if (lanzar) {
            dado.lanzar();
            dado.imprimir();
        }
    }while (lanzar);

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}