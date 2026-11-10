//File handling
#include<stdio.h>
#include<stdlib.h>

void writeToFile();
void readFromFile();
void appendToFile();

int main(){
	
	//writeToFile();
	//readFromFile();
	appendToFile();
	readFromFile();
	return 0;
}

void writeToFile(){
	FILE*fp;
	char sentence[300];
	fp = fopen("C:\\Users\\User\\OneDrive\\Desktop\\sample.txt","w");
	
	if (fp == NULL){
		printf("Error creating the file (path) \n");
		exit (1);
	}
	printf("Enter a paragraph \n");
	fgets(sentence, sizeof(sentence),stdin);
	//scanf(),scanf("s^[ \n]", &sentence
	fputs(sentence,fp);
	//fprintf(fp,"%s",sentence)
	
	printf("paragraph successfully written to file.\n");
	fclose(fp);
}

void readFromFile(){
	FILE*fp;
	int ch;
	fp=fopen("C:\\Users\\User\\OneDrive\\Desktop\\sample.txt","r");
	
	if(fp == NULL){
		printf("Error creating the file(path)\n");
		exit (1);
	}
	//read from file null character \0 EOF
	while((ch=getc(fp)) != EOF){
		putchar(ch);
	}
	
	printf("File successfully read \n");
	fclose(fp);
}

void appendToFile(){
	FILE*fp;
	char sentence[300];
	fp=fopen("C:\\Users\\User\\OneDrive\\Desktop\\sample.txt","a");
	
	if(fp==NULL){
    printf("Error creating the file (path) \n");
    exit(1);
	}
	printf("Enter a paragraph to append \n");
	fgets(sentence,sizeof(sentence), stdin);
	//scanf(),scanf("%s^[ \n]", &sentence)
	fputs(sentence, fp);
	//fprintf(fp,"This is %s",sentence
	
	printf("paragraph successfully appended to file.\n");
	fclose(fp);
}