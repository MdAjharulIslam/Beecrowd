
#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int A, B;
    while(cin >> A >> B) {
        cout << fixed << setprecision(2) << A/double(B) << endl;
    }
    return 0;
}
