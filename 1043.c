
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 float A,B,C,perimeter,area;
    scanf("%f%f%f",&A,&B,&C);

    if((A+B)>C&&(B+C)>A&&(C+A)>B){
        perimeter=A+B+C;
        printf("Perimetro = %.1f\n",perimeter);
    }
    else{
        area=.5*(A+B)*C;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
