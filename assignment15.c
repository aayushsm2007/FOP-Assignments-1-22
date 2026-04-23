#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    printf("Random numbers:\n");
    for(i=0;i<5;i++)
        printf("%d\n",rand());

    return 0;
}
