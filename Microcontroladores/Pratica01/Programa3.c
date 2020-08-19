#include <stdio.h>

int main(void) {
  int n1, n2, s;
  printf("Digite um número\n");
  scanf("%i", &n1);
  printf("Digite outro número\n");
  scanf("%i", &n2);
  s= n1+n2;
  printf("Resultado da soma: %i\n", s);
  return 0;
}
