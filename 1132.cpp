
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int x, y, aux;
    int soma = 0;
    cin >> x >> y;

    if(x > y){
        aux = y;
        y = x;
        x = aux;
    }

    for(int i = x; i <= y; i++){
            if(i%13 != 0)
                    soma += i;
    }
    cout << soma << endl;
    return 0;
}
