#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1)){
            printf("*");
        }
        printf("/n");
    }
    return 0;
    
}