#include <stdio.h>

int main()
{
	float a;
	float b;
	printf ("Value A: ");
	scanf("%f",&a);
	printf("Value B: ");
	scanf("%f",&b);
	printf("%f + %f = %f",a,b,a+b);
	printf("%f - %f = %f",a,b,a-b);
	printf("%f * %f = %f",a,b,a*b);
	return 0;
}