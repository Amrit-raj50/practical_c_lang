#include <stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);

    if(ch == 'a'||ch == 'A'||ch == 'E'||ch == 'e'||ch == 'I'||ch == 'i'||ch == 'O'||ch == 'o'||ch == 'U'||ch == 'u'){
        printf("%c is a vowel.",ch);
    }
    else{
        printf("%c is a consonant.",ch);
    }
    return 0;
}