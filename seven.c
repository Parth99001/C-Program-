#include<stdio.h>
int main(){
int P,R,T;
printf("Enter Principle Amount P:");
scanf("%d",&P);
printf("Enter Rate Of Interest R:");
scanf("%d",&R);
printf("Enter Time Period T:");
scanf("%d",&T);
int ans=(P*R*T)/100;
printf(" Simple Interest %d\n",ans);
return 0;
}