#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 float a;
	int i, num = 0;
	float sum = 0;

	for(i = 1; i <= 6; i++){
		scanf("%f",&a);

		if(a>0){
			sum = sum + a;
			num = num + 1;
		}
	}
	printf("%d valores positivos\n",num);
	printf("%.1f\n",sum/num);
    return 0;
}

