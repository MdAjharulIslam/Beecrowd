
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int a;

    cin >> a;
    for(int i = 0; i < a*4;){
            cout << (i+1) << " " << (i+2) << " " << (i+3) << " PUM\n";
            i+=4;
    }
    return 0;
}
