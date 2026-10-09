#include <iostream>

#include "NumeroBinario.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    NumeroBinario numero;
    numero.imprimir();
    numero.asignar(0);
    numero.asignar(30);
    numero.asignar(63);
    numero.imprimir();
    numero.incrementar();
    numero.incrementar();
    numero.incrementar();
    numero.imprimir();

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}