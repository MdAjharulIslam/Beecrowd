
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int a,b,c;
    cin>>a>>b>>c;
    if(a==0)
    a=24;
    int sum;
    sum=a+b+c;
    if(sum>24)
    {
        sum=sum-24;
        cout<<sum<<endl;
    }

    else if(sum==24)
    cout<<0<<endl;
    else
    cout<<sum<<endl;

    return 0;
}
