#include <stdio.h>

int main(void) {
  float A, B, X, Y;
  printf("Programa Equação primeiro grau\n");
  printf("Informe o valor de A, B, e X:\n");
  scanf("%f%f%F", &A, &B, &X);
  Y = A *X + B;
  printf("Resultado da equação %.3f\n", Y);
  return 0;
}
