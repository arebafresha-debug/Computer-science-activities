
/*

Author;Areba
Reg no;BCS-05-2026
Date;5th October 2026

*/

#include<stdio.h>

int main(){
	int choice;
	
	printf("Select data bundle:\n");
	printf("1.100MB@50KES\n");
	printf("2.500MB@200KES\n");
	printf("3.1GB@KES350:\n");
	printf("4.2GB@KES600:n");
	
	printf("Enter your choice (1-4):");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("You selected 100MB.Cost=50 KES");
			break;
		
		case 2:
			printf("You selected 500MB.Cost=200 KES");
			break;
		
		case 3:
			printf("You selected 1GB.Cost=350 KES");
			break;
		
		case 4:
			printf("You selected 2GB.Cost=600 KES");
			break;
		
		default:
			printf("Invalid choice");	
	}
	return 0;
}