
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n;
    while(cin>>n)
    {
        bool x=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(n-1-j==i){
                    cout<<2;
                    continue;
                    }
                if(i==j){
                        cout<<1;
                    }
                    else{
                        cout<<3;
                        continue;
                    }
            }
            cout<<endl;
        }
    }
    return 0;
}
