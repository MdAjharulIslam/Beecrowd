
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 long long n;
    cin>>n;
    double x,y;
    x=n/log(n);
    y=x*1.25506;
    printf("%.1lf %.1lf\n",x,y);
    return 0;
}
