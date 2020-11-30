#include <stdio.h>
#include<stdlib.h>
double cube (double num){
    double result = num*num*num;
    return result;
    printf("This will never print");
}
int main(){
    printf("Answer: %f\n",cube(3.0));

    return 0;
}