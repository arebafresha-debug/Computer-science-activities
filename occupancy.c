
/*
Authour;Areba
Adm no;BCS-05-0214/2026
Date;27th October 2026
*/

#include<stdio.h>

int main(){
	int occupancy[5][10];	
  int i, j;
  int occupied,vacant;
  
  for(i=0; i<5; i++){
	  printf("\nEnter occupancy for floor %d:\n", i+1);
	  
	  for(j=0; j<10;j++){
	  	printf("Room %d (1=occupied,0=vacant):", j+1);
	  	scanf("%d",&occupancy[i][j]);
   }
 }
 printf("\n Room Occupancy Report \n");
 for (i=0; i<5; i++) {
	 occupied=0;
	 vacant=0;
	 
	 for(j=0; j<10; j++){
		 if(occupancy[i][j]==1){
			 occupied++;
		 }else{
			 vacant++;
		 }
	 }
	 printf("Floor %d:occupied=%d,vacant=%d\n",i+1,occupied,vacant);
 }
 return 0;
}
  