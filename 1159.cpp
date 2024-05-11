
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
int x, y;

    while(true){
                cin >> x;
                if(x == 0) break;

               y = 0;

                if(x%2 == 0) y += x;
                else y += ++x;

                for(int i = 0; i < 4; i++){
                        x += 2;
                        y += x;
                }
                cout << y << endl;
    }
    return 0;
}
