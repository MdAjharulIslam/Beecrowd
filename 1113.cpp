
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int x, y, aux;

    while(true){

                cin >> x;
                cin >> y;
                if(x == y) break;

                if(x > y)
                    cout << "Decrescente" << endl;
                else
                    cout << "Crescente" << endl;

    }
    return 0;
}
