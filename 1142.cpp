
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int a;

    cin >> a;
    for(int i = 0; i < a*4;){
            cout << (i+1) << " " << (i+2) << " " << (i+3) << " PUM\n";
            i+=4;
    }
    return 0;
}
