
#include <stdio.h>
#include<math.h>
int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */

    int a,b,c,d,e,f;
    while(scanf("%d ",&a)!=EOF){
        if(a==0)break;
        scanf("%d %d",&b,&c);
        d=a*b;
        e=d*100/c;
        f=pow(e,.5);
        printf("%d\n",f);
    }
    return 0;
}
