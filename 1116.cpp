
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int x, y, z;
    cin >> x;

    for(int i = 0; i < x; i++){
            cin >> y;
            cin >> z;

            if(z == 0){
                 cout << "divisao impossivel\n";
            } else{
                   printf("%.1f\n", (float)y/(float)z);
            }
    }

    return 0;
}
