#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    //int msb=number
    if (number&(0*80000000)){
        printf("Set");
    } else{
        printf("Not Set");
    }
    return 0;
}