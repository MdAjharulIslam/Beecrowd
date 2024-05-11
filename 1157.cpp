
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n;

    std::cin >> n;

    for(int i = 1; i <= n; i++){
            if(n%i == 0) cout << i << "\n";
    }
    return 0;
}
