
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n, m , i, t=0;
    scanf("%d", &n);
    for(i=0; i<5; i++)
    {
        scanf("%d", &m);
        if(m==n) t++;
    }
    printf("%d\n", t);
    return 0;
}
