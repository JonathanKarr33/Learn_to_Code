#include <stdio.h>

int main(void) 
{
	int n = -3;
	int absn;
	if (n < 0){
	    absn = n* -1;
	}else{
	    absn = n;
	}
	printf("The absolute value of %d is %d\n",n,absn);
	printf("The value of n is %d\n",n);
	return 0;
}