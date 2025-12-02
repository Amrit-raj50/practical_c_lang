#include <stdio.h>

int main(){
    int no1,no2;
    printf("Emter two numbers : ");
    scanf("%d",&no1);
    scanf("%d",&no2);

    char ch;
    // printf("Entre the operator(+,-,*,/,) :");  //this print statement is not working 
    scanf(" %c",&ch);

    int result;
    switch(ch){
        case '+':
        result = no1 + no2;
        break;
        case '-':
        result = no1 - no2;
        break;
        case '*':
        result = no1 * no2;
        break;
        case '/':
        result = no1 / no2;
        break;
        case '%':
        result = no1 % no2;
        break;
        default:
        printf("Invalid Input.");
    }

    printf("Result : %d",result);

    return 0;
}