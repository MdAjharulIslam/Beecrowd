
#include <iostream>
#include<math.h>
using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int a;

    cin >> a;

    for(int i = 0; i < a; i++){
            cout << i+1 << " " << pow(i+1,2) << " " << pow(i+1,3) << endl;
    }
    return 0;
}
