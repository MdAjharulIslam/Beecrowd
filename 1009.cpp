
#include <iostream>
  #include<bits/stdc++.h>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */


        char M[100];

        cin>>M;

        double a,b,c;

        cin>>a>>b;

        c=a+(b*15)/100;

        cout<<fixed;

        cout<<setprecision(2)<<"TOTAL = R$ "<<c<<endl;

        return 0;
    }
