#include<stdio.h>
int main(){
    // char alp;
    // alp='a';
    // do{
    //     printf("%c\n",alp);
    //     alp+=4;
    // } while (alp<='z');

    
//     int num;
//     int count;
//     count=0;
//     printf("Enter the Value ",num);
//     scanf("%d",&num);
//    while (num>0){

//     count++;
//     num/=10;

//    }
//    printf("The Total Number is %d",count);


int num;
printf("Enter the number :");
scanf("%d",&num);
int digit;
digit=0;
digit=num%10;
int sum;
while (num>=10){
num/=10;
}
sum=digit+num;
printf("The Value is %d",sum);

    return 0;
}