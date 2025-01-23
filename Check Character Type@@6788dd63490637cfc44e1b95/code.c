#include <stdio.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if(alpha=='a' || alpha=='e'|| alpha=='i'||alpha=='o'||alpha=='u'||
    alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U'){
        printf("Vowel");
    }
    else if(isdigit(alpha)){
        printf("Digit");
    }
    else if(isalpha(alpha)){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}