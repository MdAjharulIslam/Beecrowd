
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int a,b;
    char c;
    while(cin>>a>>c>>b)
    {
        int A=a-7;
        int B=b;
        if(A<0)cout<<"Atraso maximo: 0\n";
        else{
            printf("Atraso maximo: %d\n",(A*60)+b);
        }
    }
    return 0;
}
