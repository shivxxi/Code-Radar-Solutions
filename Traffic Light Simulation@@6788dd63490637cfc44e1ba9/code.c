// Your code here...
#include<stdio.h>
int main(){
    char colour;
    scanf("%c",&colour);
    switch(colour){
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}