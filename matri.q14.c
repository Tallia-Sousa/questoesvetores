#include <stdio.h>
void multiplica(int m1[3][3], int m2[3][3], int resultado[3][3]){

int valor;
for(int i = 0; i < 3; i++){
  for(int j = 0; j < 3; j++){
    valor = m1[i][j] * m2[i][j];
    resultado[i][j] = valor;
  }
}

}

void somando(int m1[3][3], int m2[3][3], int resultado[3][3])
{
  // funçao soma
  int valor;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      valor = m1[i][j] + m2[i][j];
      resultado[i][j] = valor;
    }
  }
}
void subtraindo(int m1[3][3], int m2[3][3], int resultado[3][3])
{
  int valor;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      valor = m1[i][j] - m2[i][j];
       resultado[i][j] = valor;
    }
  }
}

void inputmatriz(int matriz[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
}

void printandoamatriz( int resultado[3][3])
{
 int valor;
 for (int i = 0; i < 3; i++)
  {
   for (int j = 0; j < 3; j++)
   {
     valor = resultado[i][j];
     printf("%d ", valor);
    }
    printf("\n");
  }
}
int main()
{

  int m1[3][3];
  int m2[3][3];
  int resultado[3][3];
  int op;
  printf("entrada de dados  da matriz 1 : \n");
  inputmatriz(m1);
  printf("entrada de dados da matriz  2 :\n");
  inputmatriz(m2);
  for(int i = 0; i < 3; i++){//roda as opçoes
  printf("opção 1-soma: \nopção 2-subtração: \nopção 3- multiplica");
  scanf("%d", &op);
  switch (op)
  {
  case 1 :
    somando(m1,m2,resultado);
    printandoamatriz(resultado);
               break;
  case 2 :
     subtraindo(m1, m2, resultado);
     printandoamatriz(resultado);
               break;
  case 3 :
     multiplica(m1, m2, resultado);
     printandoamatriz(resultado);
               break;
 
  default:
               break;
  }
  }
   
   


  return 0;
}
