
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int a,b,c; cin>>a>>b>>c;
    if(a == b || b == c || a == c || a+b == c || a+c == b || b+c == a)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
