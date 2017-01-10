#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    scanf("%s", input);
    int length = strlen(input);
    
    for(int iterator = 0; iterator < length; iterator++){
        if(65 <= input[iterator] && input[iterator] <= 90){
            input[iterator] += 32;
        }
        else if(97 <= input[iterator] && input[iterator] <= 122){
            input[iterator] -= 32;
        }
    }
    printf("%s", input);
    
    return 0;
}
