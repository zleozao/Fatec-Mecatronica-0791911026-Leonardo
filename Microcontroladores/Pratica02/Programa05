#include <stdio.h>

void realizarSoma(){
  float valor1, valor2, resultado;
  printf("SOMA!\n");
  printf("Informe 2 operandos:");
  scanf("%f%f", &valor1, &valor2);
  resultado = valor1 + valor2;
  printf("Resultado: %.2f\n", resultado);
}
void realizarSub(){
  float valor1, valor2, resultado;
  printf("SUBTRACAO!\n");
  printf("Informe 2 operandos:");
  scanf("%f%f", &valor1, &valor2);
  resultado = valor1 - valor2;
  printf("Resultado: %.2f\n", resultado);
}
void realizarMulti(){
  float valor1, valor2, resultado;
  printf("multiplicação!\n");
  printf("Informe 2 operandos:");
  scanf("%f%f", &valor1, &valor2);
  resultado = valor1 * valor2;
  printf("Resultado: %.2f\n", resultado);
}
void realizarDivi(){
  float valor1, valor2, resultado;
  printf("Divisão!\n");
  printf("Informe 2 operandos:");
  scanf("%f%f", &valor1, &valor2);
  resultado = valor1 / valor2;
  printf("Resultado: %.2f\n", resultado);
}

int main(void) {
int operacao;
float valor1, valor2, resultado;
printf("Informe a operacao desejada:\n");
scanf("%i", &operacao);

switch(operacao){
  case 1:
    realizarSoma();
    break;

  case 2:
    realizarSub();
    break;

  case 3:
    realizarMulti();
    break;

  case 5:
    printf("SEN\n");
    break;

  case 4:
    realizarDivi();
    break;
  
    default:
    printf("Operação inválida");
}
return 0;
}
