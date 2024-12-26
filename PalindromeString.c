#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int length, i, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str); // Reads input string

    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversedStr[i] = str[length - i - 1];
    }
    reversedStr[length] = '\0';

    // Check if the original and reversed strings are the same
    for (i = 0; i < length; i++) {
        if (str[i] != reversedStr[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {    // if the string is palindrome
        printf("The string is a palindrome.\n");
    }
    else {        // if the string is not palindrome
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
