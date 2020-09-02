#include <stdio.h>
#include <math.h>

float converterParaRadiano(float graus){
  float resposta;
  resposta = graus * M_PI / 180;
  return resposta;
}

float calcularSeno(float angulo){
  float resposta;
  angulo = converterParaRadiano(angulo);
  resposta = sin(angulo);
  return resposta;
}

int main(void) {
  float angulo;
  printf("Informe o valor do angulo:\n");
  scanf("%f", &angulo);
  printf("O valor de %f em radianos é %f\n", angulo, converterParaRadiano(angulo));
  printf("Valor de seno: %f\n", calcularSeno(angulo));
  return 0;
}
