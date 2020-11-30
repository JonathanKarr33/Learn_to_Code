#include <stdio.h>

int main()
{
    int day;
    int month;
    int year;
    int leap;
    int total;
    scanf("%d",&day);
    scanf("%d",&month);
    scanf("%d",&year);
    total = day;
		if (year % 400 == 0)
			leap = 1;
		else if (year % 100 == 0)
			leap = 0;
		else if (year % 4 == 0)
			leap = 1;
	if (month >1){
	    total +=31;
	}
	if (month >2){
	    if (leap == 1){
	        total += 29;
	    }
	    else{
	        total += 28;
	    }
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
	printf("The day of the year: %d\n",total);
	return 0;
}