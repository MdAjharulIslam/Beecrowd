
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int n;

    std::cin >> n;

    for(int i = 1; i <= n; i++){
            if(n%i == 0) cout << i << "\n";
    }
    return 0;
}
