
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */

 int seconds;

 scanf("%d", &seconds);

 int hours = seconds / 3600;
 seconds = seconds - (hours * 3600);

 int minutes = seconds / 60;
 seconds = seconds - (minutes * 60);

 printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
