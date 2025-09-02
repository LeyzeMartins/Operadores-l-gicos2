#include <stdio.h>

int main(){

int idade = 20;
float altura = 1.75;

//idade >= 18 => Verdadeira
//idade <= 30 => Verdadeira
//Verdadeira && Verdadeira
//Verdadeiro && altura > 1.70
//Verdadeiro && Verdadeiro => Verdadeiro.

// "Se a idade for maior ou igual a 18 e a idade for menor ou igual a 30 e a altura for maior que 1.70"
//&"e" (E lógico) Todas as condições precisam ser verdadeiras


//Você lê assim: Se a idade for entre 18 e 30 anos (inclusive) e a altura for maior que 1.70, então... = Pirntf
if (idade >= 18 && idade <= 30 && altura > 1.70)

{  //se a condição for verdadeira, ele executa o que está dentro do primeiro bloco:
    printf("Você está na faixa estária e tem estatura adequada.😉\n");
    //
}else{ // Senão (se for falso), ele cai no else:

   printf("Você não tem faixa etária e nem estatura adequada .😐\n");
}  






}