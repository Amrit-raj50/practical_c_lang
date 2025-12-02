#include <stdio.h>

int main(){

    int n ; 
    printf("enter the range :");
    scanf("%d",&n);
    int no1= 0 ;
    int no2 = 1;
    printf("%d\n",no1);
    printf("%d\n",no2);
    // int n;

    for(int i = 3 ; i <= n ; i++){
        int no3 = no1 + no2;
        printf("%d\n",no3);
        no1 = no2;
        no2 = no3;
        }

        return 0;
}