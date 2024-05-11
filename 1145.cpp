
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int x,y;

    cin >> x;
    cin >> y;

    int n = 1;

    for(int i = 1; i <= y; i++){
            if(n == x) {
                 cout << i << "\n";
                 n = 1;
            }
            else{
            cout << i << " ";
            n++;
            }
    }
    return 0;
}
