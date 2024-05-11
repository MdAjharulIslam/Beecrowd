
#include <iostream>
#include<stdio.h>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 float a= 1;
    int b = 2;
    for(int i = 3; i < 40; i++){
            a += (float)i/(float)b;
            i++;
            b *= 2;
    }
    printf("%.2f\n",a);
    return 0;
}
