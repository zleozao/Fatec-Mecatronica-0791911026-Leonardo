#include <stdio.h>

int main(void) {
  float a, b, x;
  printf("Informe o valor de B e A\n");
  scanf("%f%f", &b,&a);
  x = -b/a;
  printf("Valor de X: %.2f\n", x);
  return (0);
}
