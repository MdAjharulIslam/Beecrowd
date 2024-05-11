
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n, num;
    int perf;
    cin >> n;
    for(int i = 0; i < n; i++){
            cin >> num;
            perf = 0;

    for(int i = 1; i < num; i++){
            if(num%i == 0){
                   perf += i;
                   if(perf > num) break;
            }
    }
    if(perf == num) cout << num << " eh perfeito"<<endl;
    else cout << num << " nao eh perfeito"<<endl;

    }
    return 0;
}
