#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(int k=0;k<n-i;k++){
            printf(" ");
        }
        for(int j=i;j<=i*3;j++){
            printf("*");
        }
        printf("\n");
    }

}