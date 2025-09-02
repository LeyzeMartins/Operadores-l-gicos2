#include <stdio.h>

int main(){

    int a = 5;
    int b = -10;
    int c = 1;

    // A ordem em que o programa vai testar a PRECEDENCIA DOS OPERADORES:
    // Primeiro ele vai testa se se o ( a > 0 => Verdadeira) e (b < 0 => Verdadeira)
    // vai tester Verdadeiro && Verdadeiro => Como os 2 lados são verdadeiros => VERDADEIRO.
    // Agora temos Verdadeiro || C == 0 Ele vai testar primeiro o C == 0 que é FALSO 
    // Vai ser Verdadeiro || Falso  Como e o (Operador Logico Ou ||) a resposta e => Verdadeiro.

  if (a > 0 && b < 0 || c == 0)
  {
    printf("A Condição é Verdadeira.\n");
  }else{

    printf("A condição é Falsa.\n");

  }
  

}