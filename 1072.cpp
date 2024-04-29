#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int x, a;

    int in = 0;
    int out = 0;

    cin >> x;
    for(int i = 0; i < x; i++){
            cin >> a;
            if(a >= 10 && a <= 20) in++;
            else out++;
    }
    cout << in << " in"<<endl;
    cout << out << " out"<<endl;
    return 0;
}
