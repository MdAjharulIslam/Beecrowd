
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 float N = 0;
    for(int i = 1; i <= 100; i++){
            N += 1/(float)i;
    }
    printf("%.2f\n",N);
    return 0;
}
