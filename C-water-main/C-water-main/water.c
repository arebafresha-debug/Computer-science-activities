
/*

Author;Areba
Reg no;BCS-05-0214/2026
Date;5th October 2026

*/

#include <stdio.h>

int main(){
	float units;
	float bill;
	
	printf("Enter the number of units:");
	scanf("%f",&units);
	
	if(units<=30){
	bill=units*20;
	}
	else if(units>=31 &&units<=60){
	bill=units*25;
	}
	else{
		bill=units*30;
	}
	
	printf("Total bill:%.2f KES",bill);
	
	return 0;
}