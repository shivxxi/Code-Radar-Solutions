#include <stdio.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if(isalpha(alpha)){
        if (isupper(alpha)){
            printf("Uppercase");
        }else if(islower(alpha)){
            printf("Lowercase");
        }
    } else{
        printf("Not an alphabet");
    }
    return 0;
}
