#include <stdio.h>

int main()
{
	int month;
	int day;
	int total;
	scanf("%d",&month);
	scanf("%d",&day);
	total = day;
	if (month >1){
	    total +=31;
	}
	if (month >2){
	    total +=28;
	}
	if (month >3){
	    total +=31;
	}
	if (month >4){
	    total +=30;
	}
	if (month >5){
	    total +=31;
	}
	if (month >6){
	    total +=30;
	}
	if (month >7){
	    total +=31;
	}
	if (month >8){
	    total +=31;
	}
	if (month >9){
	    total +=30;
	}
	if (month >10){
	    total +=31;
	}
	if (month >11){
	    total +=30;
	}
    printf("The day of the year is: %d\n",total);
	return 0;
}