
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
            cout << i << " " << i*i << " " << i*i*i << "\n";
            cout << i << " " << i*i+1 << " " << i*i*i+1 << "\n";
    }
    return 0;
}
