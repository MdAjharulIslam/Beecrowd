
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int t;
    cin>>t;
    while(t--)
    {
        int y;
        cin>>y;
        if(y>=2015)
        {
            cout<<y-2014<<" A.C.\n";
        }
        else{
                cout<<2015-y<<" D.C.\n";
        }
    }
    return 0;
}
