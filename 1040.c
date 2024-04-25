
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

double n1, n2, n3, n4, exam, average;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    printf("Media: %.1f\n", average);
    if (average >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (average >= 5.0 && average <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &exam);
        printf("Nota do exame: %.1f\n", exam);
        if (exam + average / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (exam + average ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }

    return 0;
}
