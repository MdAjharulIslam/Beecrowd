#include <stdio.h>

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 float x,y;
 scanf("%f%f",&x,&y);

 if(x+y==0){
     printf("Origem\n");
 }
 else if(x==0){
     printf("Eixo Y\n");
 }
 else if(y==0){
     printf("Eixo X\n");
 }
 else if(x>0&&y>0){
     printf("Q1\n");
 }
  else if(x<0&&y>0){
     printf("Q2\n");
  }
  else if(x<0&&y<0){
     printf("Q3\n");
  }
   else if(x>0&&y<0){
     printf("Q4\n");
   }
    return 0;
}
