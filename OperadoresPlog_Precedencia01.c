#include <stdio.h>

int main(){

    int a = 5;
    int b = 10;
    int c = 1;

    // A ordem em que o programa vai testar a PRECEDENCIA DOS OPERADORES:
    // Primeiro ele vai testa se se o a > 0

  if (a > 0 && b < 0 || c == 0)
  {
    printf("A Condição é Verdadeira.\n");
  }else{

    printf("A condição é Falsa.\n");

  }
  

}