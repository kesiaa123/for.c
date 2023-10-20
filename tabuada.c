#include <stdio.h>
#include <math.h>

int main(){
    //tabuada de um numero
    int num, tabu, i= 0;
    printf("digite um numero para apresentar sua tabuada: ");
    scanf("%i", &num);
    
    for(i; i <= 10; i++){
       tabu = num * i;
       printf("tabuada = %i X %i = %i\n", num, i, tabu);
    }
}
