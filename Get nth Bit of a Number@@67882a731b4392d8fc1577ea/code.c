#include <stdio.h>
int main(){
    int number,bitStatus;
    int mask;
    scanf("%d %d",&number,&mask);
    bitStatus=(number>>mask)&1;
    if(bitStatus==1){
        printf("True");
    } else{
        printf("False");
    }
    return 0;
}