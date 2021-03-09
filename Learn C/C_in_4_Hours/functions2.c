#include <stdio.h>
#include <stdlib.h>
int x = 17;
int sayHi(int age){
    return age;
}
int main()
{
    int x = sayHi(18);
    printf("%d",x);
    return 0;
}