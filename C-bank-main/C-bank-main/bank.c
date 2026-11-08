
/*

Author;Areba
Reg no;BCS-05-0214/2026
Date;5th October 2026

*/

#include<stdio.h>

int main(){
	int balance=50000;
	int withdrawal;
	
	printf("Enter withdrawal amount:");
	scanf("%d", &withdrawal);
	
	while(withdrawal !=0 && withdrawal<=balance);
	{
		balance=balance-withdrawal;
		
		printf("Remaining balance:KES%d\n" ,balance);
		
		printf("Enter withdrawal amount:");
		scanf("%d",&withdrawal);
	}
	return 0;
}