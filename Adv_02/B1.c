#include <inttypes.h>


typedef struct list {
uint64_t address;
size_t size;
char comment[64];
struct list *next;
} list;

uint64_t findMaxBlock(list *head);

int main (void){

    return 0;
}


uint64_t findMaxBlock(list *head){
    list *currentItem = head;
    size_t maxSize;
    uint64_t addressMax;

    maxSize = currentItem->size;
    addressMax = currentItem->address;

    while (currentItem->next != NULL)
    {
        currentItem = currentItem->next;
        if(currentItem->size > maxSize){
            maxSize = currentItem->size;
            addressMax = currentItem->address;
        }
    }
    
    return addressMax;

}

size_t totalMemoryUsage(list *head){
    list *currentItem = head;

    size_t totalSize = 0;

    if(currentItem == NULL){
        return NULL;
    }

    totalSize += currentItem->size;

    while (currentItem->next != NULL)
    {
        currentItem = currentItem->next;
        
        totalSize += currentItem->size;
    }

    return totalSize;
    
}