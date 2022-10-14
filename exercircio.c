#include <stdio.h>
int potencia(int x, int n){


    if (n == 0){
        return 1;
        
    }
    else{

       return x * potencia(x,  n - 1);
    }
    
}
int main(){

int base, expoente;

printf("digite a base");
scanf("%d",&base);
printf("digite  o expoente");
scanf("%d", &expoente);
printf("%d",potencia(base, expoente));

    return 0;
}
