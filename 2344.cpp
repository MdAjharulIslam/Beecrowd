
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
    if (a==0)
        cout << "E" << endl;
    else if (a<=35)
        cout << "D" << endl;
    else if (a<=60)
        cout << "C" << endl;
    else if (a<=85)
        cout << "B" << endl;
    else if (a<=100)
        cout << "A" << endl;
    return 0;
}
