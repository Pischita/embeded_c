#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
    
};

int main(void){

    int countNumbers = 0;

    //printf("%s", "Enter values");

    scanf("%d", &countNumbers);
    struct node *head;
    struct node *currentNode;

    for (int i = 0; i < countNumbers; i++){
        struct node *item = (struct node*) malloc(sizeof(struct node) );
        item->next = NULL;

        scanf("%d", &item->value);
        
        if(i == 0){
            head = item;
            currentNode = item;
        }else{
            currentNode->next = item;
            currentNode = item;
        }
    }

    currentNode = head;

    int maxValue = -2147483648;
    while (currentNode != NULL)
    {
        if (maxValue < currentNode->value)
        {
            maxValue = currentNode->value;
        }
        
        //printf("%d", currentNode->value);
        currentNode = currentNode->next;     
    }

    int frequency = 0;
    currentNode = head;
    while (currentNode != NULL)
    {
        if (maxValue == currentNode->value)
        {
            frequency++;
        }
        currentNode = currentNode->next;     
    }

    printf("%d", frequency);   
    
    //getchar();

    return 0;
    
}  