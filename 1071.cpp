
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int x, y, sum = 0, i,a,b;

 cin>>x>>y;

 if(x < y){
  a = x;
  b = y;
 }else{
  b= x;
  a = y;
 }

 for(i = (a + 1); i < b; ++i)
 {
  if(i % 2 != 0){
   sum += i;
  }
 }

cout<<sum<<endl;

    return 0;
}
