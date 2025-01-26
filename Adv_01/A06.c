#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main (void){

    uint32_t number;

    scanf("%"SCNu32, &number);

    uint32_t result = 0;
    
    bool isOne = false;
    for(int i = 0; i < 32; i++){
        if(number & (1 << i) ){
            isOne = true;
        }else {
            isOne = false;
        }

        if(i < 24){
            result = result | (isOne ? ( 1 << i ) : ( 0 << i ) );
        }else{
            result = result | (isOne ? ( 0 << i ) : ( 1 << i ) );
        }
         
       
    }

    printf("%"PRIu32, result);
    
    return 0;
}