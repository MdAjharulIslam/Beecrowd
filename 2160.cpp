
#include <stdio.h>
#include<string.h>
int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
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
