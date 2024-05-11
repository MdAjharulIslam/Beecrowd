
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n;
    float a, b, c;

    cin >> n;

    for(int i = 0; i < n; i++){
            cin >> a;
            cin >> b;
            cin >> c;

         printf("%.1f\n", (a*2 + b*3 + c*5)/(2.0+3.0+5.0));
    }
    return 0;
}
