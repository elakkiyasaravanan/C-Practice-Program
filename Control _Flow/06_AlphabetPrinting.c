// C Program to display alphabets using ASCII values
#include <stdio.h>
int main()
{
    printf("Alphabets from (A-Z) are:\n");
    for (int i = 65; i <= 90; i++) 
{ 
        printf("%c ", i);
}

    printf("\nAlphabets from (a-z) are:\n");
    for (int i = 97; i <= 122; i++) 
{
        printf("%c ", i);
}
    return 0;
}


// Another way
#include <stdio.h>
int main()
{
    printf("The Alphabets from A to Z are: \n");
    for (char i = 'A'; i <= 'Z'; i++) 
    {
        printf("%c ", i);
    }

    printf("\nThe Alphabets from a to z are: \n");
    for (char i = 'a'; i <= 'z'; i++) {

        // Print the alphabet
        printf("%c ", i);
    }

    return 0;
}
