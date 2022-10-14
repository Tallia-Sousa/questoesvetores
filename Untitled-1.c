
//programa que soma os n termos de uma serie:
//1/1 + 2/3;
#include <stdio.h>
int somanum(int n){
   int soma = 0; 
   int i = 1;
   
   while(i <= n){
    soma = soma + i;
    i = i + 1;
                }
    printf("%d\n",soma);   
                          }

int main(){
int num;

 printf("digite um numero, para saber os n termos dessa serie");
 scanf("%d",&num);

return somanum(num);
return 0;
}
