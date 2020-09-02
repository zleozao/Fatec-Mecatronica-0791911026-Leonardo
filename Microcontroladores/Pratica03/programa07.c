#include <stdio.h>

int main(void) {
  float temperaturas[3];
  int i;
  for (i=0; i<3; i++){
    printf("Informe a temperatura %i: ", i);
    scanf("%f", &temperaturas[i]);
  }
  float soma;
  soma = 0;
  for (i=0; i <3; i++){
    soma = soma + temperaturas[i];
  }

  float media = soma / i;
  printf("Medida dos valores: %f\n", media);

  for (i=0; i<3; i++){
    if(temperaturas[i] < media){
      printf("Temperatura(s) abaixo da media: %f\n", temperaturas[i]);
    }if(temperaturas[i] > media){
      printf("Temperatura acima da media: %f\n", temperaturas[i]);
    }
  }
  return 0;
}
