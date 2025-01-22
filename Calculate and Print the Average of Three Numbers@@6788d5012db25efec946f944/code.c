#include <stdio.h>
int main(){
    int a,b,c;
    float sum,avg;
    printf("");
    scanf("%d\n %d\n %d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("Average: %.2f\n",avg);
    return 0;
    
}