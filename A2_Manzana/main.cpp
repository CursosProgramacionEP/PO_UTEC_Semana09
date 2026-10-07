#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    srand(time(nullptr));

    for (int i=1;i<=40;i++){
        if (rand()%2) {
            cout<<"\U0001F34E";
        }else {
            cout<<"\U0001F34F";
        }
    }



    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}