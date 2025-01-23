#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int lsb=number&1;
    //scanf("%d",&number);
    if(lsb==1){
        printf("Set");
    } else{
        printf("Not Set");
    }
    return 0;
}