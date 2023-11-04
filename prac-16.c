//Write a program in c to take the name,program,e-mail ID,birth year of the student and calculate the age and display all the details.
#include <stdio.h>
#include <string.h>
#include <time.h>
int main() {
    char name[50];
    char prog[30];
    char email[50];
    int birth_year;
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter Program: ");
    fgets(prog, sizeof(prog), stdin);
    prog[strcspn(prog, "\n")] = '\0';
    printf("Enter E-Mail: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';
    printf("Enter Birth Year: ");
    scanf("%d", &birth_year);
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int current_year = tm.tm_year + 1900;
    int age = current_year - birth_year;
    printf("------------------------\n");
    printf("Your name: %s\n", name);
    printf("Your program: %s\n", prog);
    printf("Your e-mail: %s\n", email);
    printf("Your age: %d\n", age);
    return 0;
}
