#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
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

