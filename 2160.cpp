
#include <stdio.h>
#include<string.h>
int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 char ch[501];
    int len;
    gets(ch);
    len = strlen(ch);
    if(len<=80)printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
