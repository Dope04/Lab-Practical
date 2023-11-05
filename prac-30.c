//Write a program in c to check whether the character entered by the user is a vowel or not.
#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isalpha(ch)) {
        int lc = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        int uc = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
        if (lc || uc) {
            printf("The character entered is a vowel.\n");
        } else {
            printf("The character entered is a consonant.\n");
        }
    } else {
        printf("The character entered is not a letter.\n");
    }
    return 0;
}
