#include <stdio.h>
#include <stdlib.h>



struct list
{
    char letter;
    char secretLetter;
    struct list *next;
};


int main(void){
    //printf("Enter value ");

    int bias;
    scanf("%d", &bias);
    bias = bias % 26;

    unsigned char ch;
    scanf("%c", &ch); // Пропускается начальный пробел
    if(ch == ' '){
        scanf("%c", &ch);
    }
    

    struct list *head;
    struct list *currentItem;


    int i = 0;
    while (ch != '.')
    {
        struct list *item = malloc(sizeof(struct list) );
        item->next = NULL;

        item->letter = ch;

        if ( (ch >= 'A' && ch <= 'Z' ))
        {
            unsigned char secret = ch + bias;
            if( secret > 90){
                secret = 65 + (secret % 91);
            }
            item->secretLetter = secret;
        }else if(ch >= 'a' && ch <= 'z' )   
        {
            unsigned char secret = ch + bias;
            if( secret > 122){
                secret = 96 + ( secret % 122);
            }
            item->secretLetter = secret;
        }else{
            item->secretLetter = ch;
        }
        
        

        if(i == 0){
            head = item;
            currentItem = item;

        }else{
            currentItem->next = item;
            currentItem = item;
        }
        i++;
        

        scanf("%c", &ch);
        
    }
    

    currentItem = head;

    while (currentItem != NULL)
    {
        printf("%c", currentItem->secretLetter);
        currentItem = currentItem->next;
    }
    printf("%c", '.');

    return 0;
}