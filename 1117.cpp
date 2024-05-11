
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 float x, y, z;
    y = 0;
    z = 0;
    while(true){
                cin >> x;
                if(x < 0 || x > 10){
                      cout << "nota invalida\n";
                }
                else if(z == 0){
                      y = x;
                      z = 1;
                }else{
                      printf("media = %.2f\n", (y+x)/2);
                      break;
                }
    }
    return 0;
}
