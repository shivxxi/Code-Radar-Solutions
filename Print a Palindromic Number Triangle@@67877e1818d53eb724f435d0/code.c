#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k=2n-2;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}