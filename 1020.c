
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int age,years ,month;
 scanf("%d",&age);
 years=age/365;
 month=age%365/30;
 age=age%365%30;
 printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,month,age);
 age=age-years;
    return 0;
}
