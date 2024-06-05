#include<stdio.h>
int main(){
    // int i=1,n;
    // while(i<=10){
    //     printf("%d\n",i);
    //     i++;
    // }
    // while(i>=1){
    //     printf("%d\n",i);
    //     i--;
    // }
    // printf("enter the Value ");
    // scanf("%d",&n);
    //  while(i<=n){
    //     printf("%d\n",i);
    //     i++;

    // }
    // printf("enter the value ");
    // scanf("%d",&n);
    // i=n;
    // while(i>=1){
    //     if(i%2!=0){
    //         printf("%d\n",i);
    //     }
    //         i--;
    // }
int a,b;
printf("enter the first Year ");
scanf("%d",&a);
printf("enter the second year ");
scanf("%d",&b);
while(a<=b){
if(a%4!=0){
if(a%100!=0){
if(a%400!=0){
printf("%d\n",a);
}
}
}
a++;
}

    return 0;
}