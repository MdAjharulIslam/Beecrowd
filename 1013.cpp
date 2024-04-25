
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
  int a,b,c,MaiorAB,s,MAX;

        cin>>a>>b>>c;

        MaiorAB=(a+b+abs(a-b))/2;

        MAX=(MaiorAB+c+abs(MaiorAB-c))/2;

        cout<< MAX<<" eh o maior"<<endl;

    return 0;
}
