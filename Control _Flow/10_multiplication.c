#include <stdio.h>

int main() {
    int num;

    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for(int i = 1; i <= num; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
