//WAP to count the total number of digits in a given number
#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("Enter a number :\n");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("\nThe number of digits in the entered number %d : %d", n, count);
    return 0;
}