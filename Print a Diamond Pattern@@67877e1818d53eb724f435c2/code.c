#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++){
            printf(" ");
        }
        for(int j=i;j<=i*3;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            printf(" ");
        }
        for(int j=n;j<=i*3;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}