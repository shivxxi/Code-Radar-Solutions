#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int msb=number&(0*80000000);
    if (msb){
        printf("Set");
    } else{
        printf("Not Set");
    }
    return 0;
}