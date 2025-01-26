#include <stdio.h>
#include <inttypes.h>

int main (void){
    uint32_t number;

    scanf("%"SCNu32, &number);
    uint8_t result = 0; 

    for(uint32_t i = 0; i < 32; i++){
        if (number & 1)
        {
            result++;
        }

        number = number >> 1;        
    }

    printf("%"PRIu8, result);
    
    return 0;
}