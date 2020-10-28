#include <stdio.h>

int main(void) {
/*Elabore um algoritmo, utilizando linguagem C, que leia dois valores do usuário e a operação que ele deseja executar (Operações: soma, subtração, divisão, multiplicação). Execute a operação desejada e imprima na tela. Não deverá ser aceita outras operações.*/
  
  float x = 0;
  float y = 0;
  char operacao = ' ';  
  float resultado;
  int i;
  int flag = 1;

  printf("Entre com o primeiro valor: ");
  scanf( "%f", &x );
  
  printf("Entre com o segundo valor: ");
  scanf( "%f", &y );

    printf("\nQue tipo de operação você deseja fazer?\n");
    printf("\nSoma digite:           + \nSubtração digite:      - \nDivisão digite:        / \nMultiplicação digite:  * \n");
    
    for(i=0;i<=99;i++){
    scanf( "%c", &operacao );
    switch( operacao ) {
      case '+':
        resultado = x+y;
        printf("\nResultado da soma: %.2f\n", resultado);
        flag = 0;
        i = 99;
      break;
      case '-':
        resultado = x-y;
        printf("\nResultado da subtração: %.2f\n", resultado);
        flag = 0;
        i = 99;
      break;
      case  '/':
        resultado = x/y;
        printf("\nResultado da divisão: %.2f\n", resultado);
        flag = 0;
        i = 99;
      break;
      case '*':
        resultado = x*y;
        printf("\nResultado da multiplicação: %.2f\n", resultado);
        flag = 0;
        i = 99;
      break;
      default:
        printf("\nDigite uma das opções acima: ");
    }
  }
  return 0;
}