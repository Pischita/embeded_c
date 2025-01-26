#include <stdio.h>
#include <inttypes.h>

int main(void){
    uint32_t number, digit;

    scanf("%"SCNu32" %"SCNu32, &number, &digit);

    uint32_t template = 0;
    for(uint32_t i = 0; i < digit; i++){
        template += (1 << i);
    }

    uint32_t result = number & template;
  

    printf("%"PRIu32, result);

    


    return 0;
}