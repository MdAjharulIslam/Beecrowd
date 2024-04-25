
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

     float A,B,C;

     cin>>A>>B>>C;


    double pi=3.14159,triangulo,circulo,trapezio,quadrado,retangulo;

    triangulo =0.5*A*C;

    circulo =pi*(C*C);

    trapezio=(A+B)/2*C;

    quadrado=B*B;

    retangulo=A*B;

    cout<<fixed;

    cout<<setprecision(3)<<"TRIANGULO: "<<triangulo<<endl;

    cout<<setprecision(3)<<"CIRCULO: "<<circulo<<endl;

    cout<<setprecision(3)<<"TRAPEZIO: "<<trapezio<<endl;

    cout<<setprecision(3)<<"QUADRADO: "<<quadrado<<endl;

    cout<<setprecision(3)<<"RETANGULO: "<<retangulo<<endl;



    return 0;
}
