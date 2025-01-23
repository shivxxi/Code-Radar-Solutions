#include <stdio.h>
int main(){
    int number;
    int shift;
    int result;

    scanf("%d %d",&number,&shift);
    result=number<<shift;
    printf("%d",result);
    return 0;
}