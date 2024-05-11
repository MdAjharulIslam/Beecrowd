
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n;
    cin>>n;
    while(n--)
    {
        char x[10001];
        cin>>x;
        int c=strlen(x);
        double z=.01*c;
        printf("%.2lf\n",z);


    }
    return 0;
}
