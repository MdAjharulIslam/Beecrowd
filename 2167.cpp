
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int N;
    while(cin >> N) {
        int last = 0, answer = 0;
        for(int i=1; i<=N; i++) {
            int value; cin >> value;
            if (value < last and answer == 0) {
                answer = i;
            }
            last = value;
        }
        cout << answer << endl;
    }
    return 0;
}
