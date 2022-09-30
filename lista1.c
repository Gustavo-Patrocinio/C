#include <stdio.h>


void input2numeros(int* num1, int* num2){
  printf("\nDigite dois numeros: ");
  scanf("%i %i",num1, num2);
}
void input2numerosf(float* num1, float* num2){
  printf("\nDigite dois numeros: ");
  scanf("%f %f",num1, num2);
}
void input3numeros(int* num1, int* num2, int* num3){
  printf("\nDigite 3 numeros: ");
  scanf("%i %i %i",num1, num2,num3);
}

int main(){

  int numero1,numero2,numero3;
  float nota1, nota2;
  int peso1=2, peso2=3;
  printf("\t\t Exercicio 1");
  input2numeros(&numero1,&numero2);
  printf("%i - %i = %i \n",numero1,numero2,numero1 - numero2);
  
  printf("\n\t\tExercicio 2: ");
  input3numeros(&numero1,&numero2, &numero3);
  printf("%i * %i * %i = %i \n",numero1,numero2,numero3,numero1 * numero2 * numero3);

  printf("\n\t\tExercicio 3: ");
  input2numeros(&numero1,&numero2);
  if(numero2 != 0){
    printf("%i / %i = %i \n",numero1,numero2,numero1 / numero2);
  }else{
    printf("Fuck you");
  };
  
  printf("\n\t\tExercicio 4: ");
  // nota1 * peso1 + nota2 * peso2 / (peso1 + peso2)
  input2numerosf(&nota1,&nota2);
  printf("(%.2f * %i + %.2f * %i) / (%i + %i) = %.2f ", nota1,peso1,nota2,peso2,peso1,peso2,(nota1*peso1 + nota2*peso2) / (peso1 + peso2));

  float produto;
  printf("\n\t\tExercicio 5: ");
  printf("Digite o valor do produto: ");
  scanf("%f", &produto);
  printf("valor com desconto = %.2f", produto * 0.9);

  float salario,vendas;
  printf("\n\tExercicio 6: ");
  printf("\nDigite o valor do seu salario: ");
  scanf("%f", &salario);
  printf("\nDigite o valor das vendas: ");
  scanf("%f", &vendas);
  printf("O salario eh: %.2f \nO valor das vendas eh: %.2f \nO valor final eh: %.2f",salario,vendas, salario + (vendas* 0.04));

  int valor;
  printf("\n\tExercicio 7: ");
  printf("\nDigite o valor para a tabuada: ");
  scanf("%i", &valor);
  for(int i = 0; i <= 10; i++){
    printf("\n%i * %i = %i",valor,i,valor * i);
  };

  int anoNasc,anoAtual,idade;
  printf("\n\tExercicio 8: ");
  printf("\nDigite seu ano de nascimento: ");
  scanf("%i", &anoNasc);
  printf("\nDigite o ano atual: ");
  scanf("%i", &anoAtual);
  idade = anoAtual - anoNasc;
  printf("\nSua idade em anos: %i anos", idade);
  printf("\nSua idade em meses: %i meses", idade * 12);
  printf("\nSua idade em dias: %i dias", idade * 365);
  printf("\nSua idade em semanas: %i semanas", idade * 52);

  float salario=3000,conta1 = 100,conta2 = 200; 
  printf("\n\tExercicio 9: ");
  printf("\nO salario antigo: %.0f \nO salario do Joao agora eh: %.0f",salario, salario - (conta1*(0.02)+conta2*(0.02)));


  float valor,dolar,marcoA,libraE;
  printf("\n\tExercicio 10: ");
  printf("\nDigite o valor em reais: ");
  scanf("%f", &valor);
  printf("\nSeu valor atual: %.2f", valor);
  printf("\nEm Dolar: %.2f", valor / 1.8);
  printf("\nEm Marco Alemao: %.2f", valor / 2);
  printf("\nEm Libra Esterlina: %.2f", valor / 3.57);

}