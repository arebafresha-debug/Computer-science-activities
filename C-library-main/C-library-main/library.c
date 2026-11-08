
/*

Author;Areba
Reg no;BCS-05-0214/2026
Date;26th September 2026

*/
#include <stdio.h>

int main(){
	int bookID;
	int dueDate;
	int returnDate;
	int daysOverdue;
	int fineRate;
	int fineAmount;
	
	printf("Enter bookID:\t");
	scanf("%d",&bookID);
	
    printf("Enter dueDate :\t");
	scanf("%d",&dueDate);
	
	printf("Enter returnDate:\t");
    scanf("%d",&returnDate);
    
    daysOverdue=returnDate-dueDate;
    
    if(daysOverdue<=7){
		fineRate=20;
	}
	else if(daysOverdue>=8 && daysOverdue<=14){
		fineRate=50;
	}
	else{
		fineRate=100;
	}
	
	fineAmount=daysOverdue*fineRate;
	
	printf("bookID:%d\n",bookID);
	printf("dueDate:%d\n",dueDate);
	printf("returnDate:%d\n",returnDate);
	printf("daysOverdue:%d\n",daysOverdue);
	printf("fineRate:%d\n",fineRate);
	printf("fineAmount:%d\n",fineAmount);
	
	return 0;
}

