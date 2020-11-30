# include <stdio.h>
#include <stdlib.h>

int main(){
    int index = 1;
    int num = 1;
    while(index <=5){
        printf("%d\n",index);
        index ++;
    }

    do{
        printf("%d",num);
    }while (num <=5);
    return 0;
}