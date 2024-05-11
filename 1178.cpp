
#include <iostream>
#include<stdio.h>
 using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    double n;

    cin >> n;

    printf("N[%d] = %.4f\n", 0, n);

    for(int i = 1; i < 100; i++){
            n = n/2.0;
            printf("N[%d] = %.4f\n", i, n);
    }
    return 0;
}
