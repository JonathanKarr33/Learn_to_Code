#include <stdio.h>

int main()
{
	float startValue = 100;
	float interestRate = 0.015;
	float firstYearValue;
	float secondYearValue;
	float thirdYearValue;
	firstYearValue = startValue + interestRate * startValue;
	secondYearValue = firstYearValue + interestRate * firstYearValue;
	thirdYearValue = secondYearValue + interestRate * secondYearValue;
	printf("After first year: %f\n", firstYearValue);
	printf("After second year: %f\n", secondYearValue);
	printf("After third year: %f\n", thirdYearValue);
	return 0;
}