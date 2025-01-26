#include <stdio.h>
#include <stdbool.h>



int main(void){
    unsigned int number, digits;

    scanf("%d %d", &number, &digits);


    unsigned int result = number;
    bool isAdd = false;
    for(unsigned int i = 0; i < digits; i++){
        if(result & 1){
            isAdd = true;
        }else{
            isAdd = false;
        }

        result = result >> 1;

        if(isAdd){
            result = result + (1 << 31);
        }
    }    

    printf("%u", result);
    

    return 0;
}