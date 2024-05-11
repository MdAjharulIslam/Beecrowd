
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int N,X,Y;
    scanf ("%d", &N);
    for(Y=1;Y<=N;Y++)
    {
        scanf ("%d",&X);
        if(X==0)
            printf("NULL\n");
        else if(X<=0&&X%2==0)
            printf ("EVEN NEGATIVE\n");
        else if(X<=0&&X%2==-1)
            printf ("ODD NEGATIVE\n");
        else if(X>=0&&X%2==0)
            printf ("EVEN POSITIVE\n");
        else if(X>=0&&X%2==1)
            printf ("ODD POSITIVE\n");
    }

    return 0;
}
