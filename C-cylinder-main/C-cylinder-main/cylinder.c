// Variables and Data types

/*
Author;Areba
Adm No;BCS-05-0214/2026
Date;20th September 2026
*/

#include <stdio.h> 

int main () {
	float height; //%f
	float radius; //%f
	float volume; //%f
	float surface_area; //%f
	float pi=3.142;
	
	//prompt the user

	printf("Enter the height:\t",height);
	scanf("%f",&height);
	
	printf("Enter the radius:\t",radius);
	scanf("%f",&radius);
	
	volume=pi*radius*radius*height;
	surface_area=(2*pi*radius*radius)+(2*pi*radius*height);
	
	printf("volume=%.2f\n",volume);
	printf("surface_area=%.2f\n",surface_area);
	
	return 0;
	
	
}