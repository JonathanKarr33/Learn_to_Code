#include <stdio.h>

int main()
{
	int ip1;
    int ip2;
    int ip3;
    int ip4;
    scanf ("%d",&ip1);
    scanf("%d",&ip2);
    scanf("%d",&ip3);
    scanf("%d",&ip4);
    if (!((0 <= ip1 <= 255) & (0 <= ip2 <= 255) & (0 <= ip3 <= 255) & (0 <= ip4 <= 255))){
        printf("Incorrect IP Address");
    }
    else{
        printf("Human readable IP address is %d.%d.%d.%d",ip1,ip2,ip3,ip4);
    }
	return 0;
}