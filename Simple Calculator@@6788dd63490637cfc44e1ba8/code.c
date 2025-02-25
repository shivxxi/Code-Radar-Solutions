#include <stdio.h>
int main(){
    int a,b;
    char op;
    int result=0;
    scanf("%d %d",&a,&b);
    scanf("%c",&op);
    switch(op){
        case'+':
        result=a+b;
        // printf("%d",&result);
        break;
        case'-':
        result=a-b;
        // printf("%d",&result);
        break;
        case'*':
        result=a*b;
        // printf("%d",&result);
        break;
        case'/':
        result=a/b;
        // printf("%d",&result);
        break;
    }
    printf("%d",&result);
    return 0;
}