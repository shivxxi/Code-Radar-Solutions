#include <stdio.h>
int main(){
    int a,b,op;
    char op;
    int result=0;
    scanf("%d %d",&a,&b);
    scanf("%c",&op);
    switch(op){
        case'+':
        result=a+b;
        printf("%d",&result);
        break;
        case'-':
        result=a-b;
        printf("%d",&result);
        break;
        case'*':
        result=a*b;
        printf("%d",&result);
        break;
        case'/':
        result=a/b;
        printf("%d",&result);
        break;
    }
    return 0;
}