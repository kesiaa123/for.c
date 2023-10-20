#include <stdio.h>
#include <math.h>

int main(){
    //fatorial de um numero
    int num, fatorial = 1, i= 1;

    
    for(num; num<=0; num){
    printf("digite um numero para calcular seu fatorial: \n ");
    scanf("%i", &num);
         if(num < 0){
            printf("numero invalido\n");
    
         }else if(num == 0){
            printf("fatorial = 1");
            break;
        }
    }
    for(i; i<=num; i++){
        fatorial *= i;
    
    }if(num > 0){
         printf("fatorial = %i\n", fatorial);
    }
}
