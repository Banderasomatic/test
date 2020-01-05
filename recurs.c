#include <stdio.h>
#include <unistd.h>

long fact(long n);

int main(void)
{
    long number;
    long result;

    printf("Enter a number: ");

    scanf("%d", &number);

    result = fact(number);

    printf("The factorial is: %d", result);

    return 0;
}

long fact(long n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}