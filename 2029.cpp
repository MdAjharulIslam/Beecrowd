
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */

    double vol,rad,area,height;
    while(scanf("%lf %lf", &vol ,&rad)!=EOF)
    {
        rad=rad/2;
        area=3.14*rad*rad;
        height=vol/(3.14*rad*rad);
        printf("ALTURA = %.2lf\n",height);
        printf("AREA = %.2lf\n",area);

    }
    return 0;
}
