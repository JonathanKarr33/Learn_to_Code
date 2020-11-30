#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fpointer = fopen("employees.txt","w");
    fprintf(fpointer,"Jim, Salesman\n Pam, Receptionist\nOscar,Accounting");
    fclose(fpointer);
   FILE * hpointer = fopen("employees.txt","a");
    fprintf(hpointer,"\nappend");
    fclose(hpointer);
    return 0;
}