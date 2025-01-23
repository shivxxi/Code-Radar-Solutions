#include <stdio.h>
int main(){
    int number,bitStatus;
    int mask;
    scanf("%d %d",&number,&mask);
    bitStatus=(number>>mask)&1;
    if(bitStatus==1){
        printf("1");
    } else{
        printf("0");
    }
    return 0;
}