
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int j = 7;
    for(int i = 1; i <= 9; i++){
            cout << "I=" << i << " " << "J=" << j << "\n";
            cout << "I=" << i << " " << "J=" << j-1 << "\n";
            cout << "I=" << i << " " << "J=" << j-2 << "\n";
            i++;
            j+=2;
    }
    return 0;
}
