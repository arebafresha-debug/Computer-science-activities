
#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp;
    char title[100];
    char choice;

    fp = fopen("C:\\Users\\User\\OneDrive\\Desktop\\C files\\borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter book title: ");
        // clear input buffer
        getchar();
        fgets(title, sizeof(title), stdin);
        
        fprintf(fp, "%s\n", title);
        printf("Book title successfully stored in borrowed_books.txt\n");

        printf("Do you want to add another? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("File closed.\n");
    return 0;
}