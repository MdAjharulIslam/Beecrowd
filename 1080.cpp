
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
    int n;
    int a = 0;
    int b = 0;

    for(int i = 1; i <= 100; i++){
            cin >> n;
            if(n > a){
                 a = n;
                 b = i;
            }
    }

    cout << a << endl;
    cout<< b << endl;

    return 0;
}
