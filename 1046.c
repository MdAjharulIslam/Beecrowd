
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int a,b;
    scanf ("%d%d", &a, &b);
    if(a==b)
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    else if(a<=b)
        printf ("O JOGO DUROU %d HORA(S)\n",b-a);
    else
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    return 0;
}
