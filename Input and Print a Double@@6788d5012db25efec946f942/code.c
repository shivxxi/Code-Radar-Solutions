#include <stdio.h>

int main()
{
    char input[100];
    printf("");
    fgets(input,sizeof(input),stdin);
    // scanf("%lf",&number);
    printf("You entered: %s",input);
    return 0;
    
}