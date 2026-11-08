
/*

Author;Areba
Reg no;BCS-05-0214/2026
Date;5th October 2026

*/

#include <stdio.h>

int main(){
	float attendance;
	float average_mark;
	
	printf("Enter attendance percentage:");
	scanf("%f", &attendance);
	
	printf("Enter the average_mark:");
	scanf("%f", &average_mark);
	
    if (attendance>=75 && average_mark>=40){
		printf("Eligible for final exams.");
	}	
	else{
		printf("Not eligible.");
	}
	
	return 0;
}