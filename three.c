#include<stdio.h>
int main(){
    int a,b,c,d;
    printf(" Enter value 1:");
    scanf("%d" ,&a);
     printf(" Enter value 2:");
    scanf("%d" ,&b);
     printf(" Enter value 3:");
    scanf("%d" ,&c);
     printf(" Enter value 4:");
    scanf("%d" ,&d);
    int ans = (a+b)*(c-d);
    printf("%d\n",ans);
    return 0;
}