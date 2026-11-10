
/*
Authour;Areba
Adm no;BCS-05-0214/2026
Date;27th October 2026
*/

int main(){
	int chain[3][5][10];
	int i,j,k;
	int totalOccupied=0;
	
	for(i=0; i<3;i++){
		for(j=0;j<5;j++){
			for (k=0; k<10; k++){
				chain[i][j][k]=(i+j+k)% 2;
				
				if(chain [i][j][k]==1) {
					totalOccupied++;
				}
			}
		}
	}
	printf("Total occupied rooms across all branches=%d\n",totalOccupied);
	
	return 0;
}