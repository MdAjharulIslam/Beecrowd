#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 float a;
 int sum=0;
for (int i=0;i<6;i++){
    scanf("%f",&a);
    if(a>0){
        sum=sum+1;
    }
}
printf("%d valores positivos\n",sum);
 return 0;
}
