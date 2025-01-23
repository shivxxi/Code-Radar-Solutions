#include <stdio.h>
int main(){
    int number, result,shift;
    scanf("%d %d",&number,&shift);
    result=number>>shift;
    printf("%d",result);
    return 0;
}