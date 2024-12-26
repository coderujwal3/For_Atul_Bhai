#include <stdio.h>

                    //This is also a way to reverse the number
/*
int main() {
    int num, reverse = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    original = num;

    while(num != 0) {
        int digit = num%10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
        printf("Reverse of %d is : %d", num, reverse);
    return 0;
}
*/
                    // But We prefer this one
int reverse(int num) {
    int reverseNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }
    return reverseNum;
}

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int result = reverse(num);
    printf("Reverse of %d is : %d", num, result);
    return 0;
}