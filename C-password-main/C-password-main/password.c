
/*
Author:Areba
Adm No:BCS-05-0214/2026
Date:20th October 2026
*/

#include <stdio.h>

int main(){
	int password;
	
	do{
		printf("Enter password:");
		scanf("%d",&password);
		
	}
	
	while(password != 1234);
	printf("Access Granted\n");
	
	return 0;
}