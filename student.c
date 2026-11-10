#include <stdio.h>
#include <string.h>

void saveStudent() {
    FILE *fp;
    char admission[20], name[50], course[30];

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- Enter First Student ---\n");
    printf("Admission Number: ");
    fgets(admission, sizeof(admission), stdin);
    printf("Full Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission: ", fp);
    fputs(admission, fp);
    fputs("Name: ", fp);
    fputs(name, fp);
    fputs("Course: ", fp);
    fputs(course, fp);
    fputs("--------------------\n", fp);

    fclose(fp);
    printf("First student saved!\n");
}

void displayStudents() {
    FILE *fp;
    char ch;

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    ch = getc(fp);
    while (ch != EOF) {
        putchar(ch);
        ch = getc(fp);
    }

    fclose(fp);
}

void addStudent() {
    FILE *fp;
    char admission[20], name[50], course[30];

    fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- Enter Second Student ---\n");
    printf("Admission Number: ");
    fgets(admission, sizeof(admission), stdin);
    printf("Full Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission: ", fp);
    fputs(admission, fp);
    fputs("Name: ", fp);
    fputs(name, fp);
    fputs("Course: ", fp);
    fputs(course, fp);
    fputs("--------------------\n", fp);

    fclose(fp);
    printf("Second student added!\n");
}

int main() {
    saveStudent();      // a) - w mode
    displayStudents();  // b) - r mode
    addStudent();       // c) - a mode
    displayStudents();  // d) - show both

    return 0;
}