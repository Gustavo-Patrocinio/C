#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(){
  int n;
  printf("Digite N: ");
  scanf("%i", &n);
  float* pesos = (float*)malloc(n*sizeof(float));
  float* alturas = (float*)malloc(n*sizeof(float));
  float* imc = (float*)malloc(n*sizeof(float));
  
  for (int i=0; i < n; i++){
    printf("Pessoa(%i): ",i);
    scanf("%f %f", &pesos[i], &alturas[i]);
    imc[i] = pesos[i] / (alturas[i] * alturas[i]);
  }
  
  float somapesos=0;
  float somaalturas=0;
  float somaimc=0;
  float maiorpeso=0;
  float menorpeso=FLT_MAX;
  for(int i=0; i < n; i++){
    somapesos+=pesos[i];
    somaalturas+=alturas[i];
    somaimc+=imc[i];
    if(pesos[i] > maiorpeso){
      maiorpeso=pesos[i];
    }
    if(pesos[i] < menorpeso){
      menorpeso=pesos[i];
    }
    // printf("%f ", somapesos);
  }
  printf("\n\nmedia dos pesos: %f ", somapesos/n);
  printf("\n\nmedia das alturas: %f ", somaalturas/n);
  printf("\n\nmedia imc: %f", somaimc/n);
  printf("\n\nmaior peso: %f", maiorpeso);
  printf("\n\nmenor peso: %f", menorpeso);

  return 0;
};