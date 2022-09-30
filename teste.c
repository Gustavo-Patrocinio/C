#include <stdio.h>
#define MAX 10
  
void printVector(int* vec){
  for (int i=0; i < MAX; i++){
    printf("%i ", vec[i]);
  }
  printf("\n");
};

void copyVector(int* from, int* to){
  for (int i=0; i < MAX; i++){
    to[i] = from[i]; 
  }
};

void doubleValue(int* vec){
    for (int i=0; i < MAX; i++){
     vec[i] = vec[i] * 2;
  }
};

void invertedcopy(int*to, int*from){
  for (int i=0; i < MAX; i++){
    to[i] = from[MAX-i]; 
  }
};
int main(){
  int vector1[MAX];
  int vector2[MAX];
  int i;
  for (i= 0;i < MAX; i++){
    printf ( "Digite um numero: ");
    scanf("%i",&vector1[i]);
  }

  printf("\nVetor1: \n");
  printVector(vector1);
  copyVector(vector1, vector2);
  printf("\nVetor2 copia do 1: \n");
  printVector(vector2);
  printf("\nVetor dobrado: \n");
  doubleValue(vector1);
  printVector(vector1);
  printf("\nVetor invertido: \n");
  invertedcopy(vector2, vector1);
  printVector(vector1);
  printf("\n");
  printVector(vector2);
  return 0;
};