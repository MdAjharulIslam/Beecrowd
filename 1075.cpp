
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int N;
    scanf("%d",&N);
    for(int i=1;i<=10000;i++){
        if(i%N==2){
            printf("%d\n",i);
        }
    }
    return 0;
}
