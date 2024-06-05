#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Value 1:");
    scanf("%d", &a);
    printf("Enter the Value 2:");
    scanf("%d", &b);
    printf("Enter the Value 3:");
    scanf("%d", &c);
    int ans = a+b*c-b/c;
    printf("%d\n",ans);
    return 0;
}