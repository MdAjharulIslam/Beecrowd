
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 string str;
     int m,n;
     cin>>m>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>str;
         if(str=="fechou")
         m++;
         else
         m--;
     }
     cout<<m<<endl;
    return 0;
}
