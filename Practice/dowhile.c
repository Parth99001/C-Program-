#include<stdio.h>
int main(){
    // int i;
    // i=1;
    // do{
    //     printf("%d\n",i);
    //     i++;
    // }while(i<=10);
    //  int i;
    // i=10;
    // do{
    //     printf("%d\n",i);
    //     i--;
    // }while(i>=1);

     int i,n;
     printf("Enter the Value ");
     scanf("%d",&n);
    i=1;
    do{
        if(i%2==0){
             printf("%d\n",i);
        }
       
        i++;
    }while(i<=n);
    return 0;
}