
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int tst, i, n;
    while(scanf("%d", &tst) && tst)
    {
        for(i=1; i<=tst; i++)
        {
            scanf("%d", &n);
            if(n%2) printf("%d\n", n*2-1);
            else printf("%d\n", n*2-2);
        }
    }
    return 0;
}
