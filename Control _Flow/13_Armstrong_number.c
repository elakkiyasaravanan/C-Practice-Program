#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;   // Get last digit
        result += remainder * remainder * remainder; // cube it
        originalNum /= 10;              // remove last digit
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

