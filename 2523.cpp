
#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
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
