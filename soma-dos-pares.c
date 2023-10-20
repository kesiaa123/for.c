#include <stdio.h>
#include <math.h>

int main(){
    //soma de numeros pares
    int num = 2, soma = 0;

    for(num; num <= 50; num+=2){
        printf("%i ", num);
        soma+= num;
    }
       printf("soma = %i", soma);
   
}
