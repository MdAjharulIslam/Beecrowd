
#include <stdio.h>
#include <math.h>
int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 double x1, x2, y1, y2, distance;

     scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

     distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

     printf("%.4lf\n", distance);

    return 0;
}
