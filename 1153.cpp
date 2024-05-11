
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int N;
    int facto = 1;

    cin >> N;

    for(int i = 0; i < (N-1); i++){
            facto *= (N - i);
    }
    cout << facto << endl;
    return 0;
}
