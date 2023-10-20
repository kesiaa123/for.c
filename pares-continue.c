#include <stdio.h>
#include <math.h>

int main(){
    //numeros pares com comando continue
    int num = 0;

    for(num; num<=10; num++){
        if(num % 2 != 0){
            continue;  
    }
     printf("%i ", num);
    
}
}
