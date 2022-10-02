#include <stdio.h>

int matriz1[4][4],i,j;
void matriz(){
  for(i = 0;i < 1; i++)
    for(j = 0;j<4;j++){
    printf("[%d][%d] = %d\t",i,j,matriz1[i][j]); 
  }
  printf("\n");

  for(i = 1;i <2; i++)
    for(j = 0;j<4;j++){
    printf("[%d][%d] = %d\t",i,j,matriz1[i][j]); 
  }
  printf("\n");
  for(i = 2;i <3; i++)
    for(j = 0;j<4;j++){
    printf("[%d][%d] = %d\t",i,j,matriz1[i][j]); 
  }
  printf("\n");
  for(i = 3;i <4; i++)
    for(j = 0;j<4;j++){
    printf("[%d][%d] = %d\t",i,j,matriz1[i][j]); 
  }
  printf("\n");
  for(i = 4;i <4; i++)
    for(j = 0;j<4;j++){
    printf("[%d][%d] = %d\t",i,j,matriz1[i][j]); 
  }
}
int main(){

  int i,j;

  printf("Digite os valores para os elementos da matriz\n\n");
  for(i = 0; i<4; i++)
    for(j = 0; j<4; j++){
      printf("\nElemento [%d][%d] = ",i,j);
      scanf("%d", &matriz1[i][j]);
  }

    printf("\n\nOs numeros da matriz sao: \n");  
    matriz();

return 0;
}