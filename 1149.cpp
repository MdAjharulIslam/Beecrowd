
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int a, n;

    int b= 0;

    while(cin >> a){
              cin >> n;
              while(n <= 0){ cin >> n;}
              for(int i = 0; i < n; i++){
                       b += (a + i);
              }
              cout << b <<endl;
              b = 0;
    }
    return 0;
}
