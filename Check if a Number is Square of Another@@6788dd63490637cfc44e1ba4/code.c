#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sq=b*b;
    if(a==sq){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}