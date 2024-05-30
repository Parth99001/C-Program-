#include<stdio.h>
int main(){
    int a ,hra,da;
    printf("Enter Basic Salary:");
    scanf("%d",&a);
    hra = 0.2*a;
    da=0.5*a;
    int ans=a+hra+da;
    printf("Grross Salary %d\n",ans);
    return 0;
}