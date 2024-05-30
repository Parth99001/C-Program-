#include<stdio.h>
int main(){
    printf("hello\n");
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num%3==0 || num%5==0){
        printf("%d is Multiple of 3or5",num);
    }else{
        printf("%d is not Multiple of 3or5",num);
    }
    return 0;
}