
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n;

    while(true){
                cin >> n;
                if(n == 0) break;
                for(int i = 1; i <= n; i++){
                        cout << i;
                        cout << ((i == n) ? "\n" : " ");
                }
    }
    return 0;
}
