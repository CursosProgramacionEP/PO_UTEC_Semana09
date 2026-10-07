#include <iostream>
#include <vector>
#include "Manzana.h"
#include "funciones.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    int n;
    ingresar_entero_positivo(&n);
    srand(time(nullptr));
    vector<Manzana> cesto=llenar_cesto(n);
    mostrar_cesto(cesto);
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}