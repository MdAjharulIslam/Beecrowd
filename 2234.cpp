
#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int A, B;
    while(cin >> A >> B) {
        cout << fixed << setprecision(2) << A/double(B) << endl;
    }
    return 0;
}
