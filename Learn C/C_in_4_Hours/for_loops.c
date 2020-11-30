#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int j;
    int luckyNumbers[] = {4,8,15,16,23,42};
    for (i = 0; i < 5; i++)
    {
        printf("%d\n",i);
    }
    for(j =0; j <6; j++){
        printf("%d\n",luckyNumbers[j]);
    }
    return 0;
}