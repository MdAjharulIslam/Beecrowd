
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int a,b,c;
    while(scanf("%d%d", &a, &b)!=EOF)
    {
        if(a==b)
            printf("%d\n", a);
        else if(a>b)
            printf("%d\n", a);
        else if(a<b)
            printf("%d\n", b);
    }
    return 0;
}
