
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 unsigned long long int n;
    while(scanf("%llu", &n))
    {
        if(n == -1ll) break;
        if(n == 0ll) printf("0\n");
        else printf("%llu\n", n - 1ll);
    }
    return 0;
}
