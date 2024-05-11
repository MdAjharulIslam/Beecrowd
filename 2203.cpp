
#include <iostream>
#include<string.h>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='1')
            count++;
    }
    if(count%2==0)
        str=str+'0';
    else
        str=str+'1';
    cout<<str<<endl;
    return 0;
}
