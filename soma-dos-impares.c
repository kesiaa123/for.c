#include <stdio.h>
#include <math.h>

int main(){
    //soma dos numeros impares
    int num = 1, soma = 0;
    for(num; num<=100; num+=2){
       soma+= num;
       printf("%i ", num);
    }
    printf("soma = %i ", soma);
}
