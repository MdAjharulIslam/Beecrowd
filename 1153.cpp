
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
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
