//Variables and data types

/*
Author;Areba
Reg no;BCS-05-0214/2026
Date;20th September 2026
*/

#include<stdio.h>include 

int main () {
	
float height;//%f
double bank_balance;//%lf
char phone_number[20];//%c

//prompt the user
printf("Enter the height(in cm) \t",height);
scanf("%f",&height );

printf("Enter the bank_balance(in kenya shillings) \t",bank_balance);
scanf("%lf",&bank_balance );

printf("Enter the phone_number \t",phone_number);
scanf("%19s",&phone_number );

printf("The height(in cm) is %f\n",height);
printf("My bank_balance is %lf\n",bank_balance);
printf("My phone_number is %s\n",phone_number);

return 0;
}