
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int n;

    while(true){
                cin >> n;
                if(n == 0) break;
                for(int i = 1; i <= n; i++){
                        cout << i;
                        cout << ((i == n) ? "\n" : " ");
                }
    }
    return 0;
}
