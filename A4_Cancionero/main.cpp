#include <iostream>

#include "Cancion.h"
#include "funciones.h"

using namespace std;
#include <vector>

int main() {
    vector<Cancion> canciones;
    guardarCancion(canciones, ingresarCancion());
    imprimirCancion(canciones);

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}