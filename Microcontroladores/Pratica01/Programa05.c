#include <stdio.h>

int main(void) {
  int n, r;
  printf("Informe um número\n");
  scanf("%d", &n);
  r = n %2;
  if (r == 0){
    printf("Número digitado é par\n");
  } else {
    printf("Número digitado é ímpar\n");
  }
  printf("Fim do programaz\n");
  return 0;
}
