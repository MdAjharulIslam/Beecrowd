
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 char s[1001];
    int n,l;
    while(scanf("%s",s) != EOF){
        scanf("%d",&n);
        while(n--){
                scanf("%d",&l);
            printf("%c",s[l-1]);
        }
        printf("\n");
    }
    return 0;
}
