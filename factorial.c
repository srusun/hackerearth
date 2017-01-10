#include <stdio.h>

int main()
{
    int factorial, factorial_result = 1;
    scanf("%d", &factorial);
    
    for(int iterator = factorial; iterator > 0; iterator--)
    {
        factorial_result *= iterator;
    }
    printf("%d", factorial_result);
    return 0;
}
