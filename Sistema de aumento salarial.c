/****************************************************
Autor: Caio Herique Pessoa de Lima.

Ultima Atualização: 23/06/2022.

Objetivo: Fazer o programa ler o salário atual dado
pelo cliente e o percentual de aumento que este
cliente irá dar para seus funcionários.
*****************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void nv_salario();

int main() 
{
  int op;
  
  do 
  {
    nv_salario();
    
    printf("\n\n(1) Continuar / (2) Sair\n");
    scanf("%d", &op);
    
    // Sistema de loop do {...} while.
  } while (op == 1); 

  if (op == 2) 
  {
    exit(0);
  }

  return 0;
}

void nv_salario()
{
  float novo_salario, aumento, salario;
  int add;
  
  system("cls");
  printf(" Digite o salário atual: "); // Entrada do Salário.
  scanf("%f", &salario);
  
  printf("\n Digite o Percentual de Aumento do Funcionário: "); // Entreda do Percentual de Aumento                        
  scanf("%f", &aumento);
 
  printf("\n\n O percentual indicado foi: %2.f%%", aumento);

  aumento = aumento / 100;
  add = salario * aumento;
  novo_salario = salario + salario * aumento;

  printf("\n\n Verba atribuida ao salario: R$%d", add);

  printf("\n\n\n O aumento salarial será: R$%2.f", novo_salario);

}