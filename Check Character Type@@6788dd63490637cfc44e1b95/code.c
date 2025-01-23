#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if((a>=65 && a<=90) || (a>=97 && a<=122)){
        if(a==97 || a==101 || a==105 || a==111 || a==117 || a==65 || a==69 || a==79 || a==85 || a==73){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(a>=48 && a<=57){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}