#include<stdio.h>
int main(){
    int F;
    printf("Enter Value Of Fahrenheit :");
    scanf("%d",&F);
    int C=(F-32)+5/9;
    printf("C Value %d\n",C);
    return 0;
}