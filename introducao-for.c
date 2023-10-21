#include <stdio.h>
#include <math.h>

int main(){

    int i = 1;
 //variavl inicial, mais a condiçao e complemento
    for(i; i <= 10; i++){
        /*condicao para interromper o progama em uma determinada hora
        usa-se break:
         if(i == 5){
            break;
        }
        printf("%d", i);*/

        /*comando 'continue' ele pula uma condiçao determinada e continua o programa*/
        if(i == 5){
            continue;
        }
        printf("%d", i);

    }
}
