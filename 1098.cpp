
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 float i = 0;
    float j = 1;
    while(i <= 2.1){
         cout << "I="<< i <<" "<< "J=" <<j+i <<endl;
         cout << "I="<< i << " "<< "J="<< j+1+i <<endl;
         cout << "I=" << i << " "<< "J="<< j+2+i <<endl;
            i+= 0.2;

    }

    return 0;
}
