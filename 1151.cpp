
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n;
    int fibon[46];

    cin >> n;

    fibon[0] = 0;
    fibon[1] = 1;

    cout << fibon[0] << " " << fibon[1] <<" ";

    for(int i = 2; i < n; i++){
            fibon[i] = fibon[i-1] + fibon[i-2];
            if(i == (n-1))
                 cout << fibon[i];
            else
                cout << fibon[i] << " ";
    }

    cout <<endl;
    return 0;
}
