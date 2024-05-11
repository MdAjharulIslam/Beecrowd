
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int x,z;
     cin>>x>>z;
     while(z<=x)
     cin>>z;
     int i,j,sum=0;
     for(i=x,j=1;;j++,i++)
     {
         sum=sum+i;
         if(sum>z)
         break;
     }
     cout<<j<<endl;
    return 0;
}
