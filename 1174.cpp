
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 double A[100];
    int i;
    for(i=0; i<=99; i++)
        scanf("%lf", &A[i]);
    for(i=0; i<=99; i++)
    {
        if(A[i]<=10.0)
            printf("A[%d] = %.1lf\n",i, A[i]);
    }
    return 0;
}
