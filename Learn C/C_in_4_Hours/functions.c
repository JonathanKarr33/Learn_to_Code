#include <stdio.h>
#include <stdlib.h>
void sayHi(char name[],int age){
    printf("Hello %s. You are %d.\n",name,age);
}
int main()
{
    printf("Top\n");
    sayHi("Jonathan",18);
    sayHi("Evan",17);
    printf("bottom\n");
    return 0;
}

