#include <stdio.h>
int main() {
    int a , b ,temp;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

//Without Using a Temporary Variable
#include <stdio.h>
int main() {
   int a , b ;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

//Using Bitwise XOR Operator
#include <stdio.h>

int main() {
   int a , b ;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
