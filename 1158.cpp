
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n, x, y,z;

    cin >> n;

    for(int i = 0; i < n; i++){
            cin >> x;
            cin >> y;

            z = 0;

            if(x%2 != 0){
                   z+=x;
            }else{
                   x+=1;
                   z += x;
            }

            for(int i=0; i < y-1; i++){
                    x += 2;
                    z += x;
            }

            cout << z << endl;
    }
    return 0;
}
