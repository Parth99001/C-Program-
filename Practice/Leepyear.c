#include<stdio.h>
int main(){
int n;
printf("Enter the Number of Year :");
scanf("%d",&n);
if(n%4==0){
if(n%100==0){
if(n%400==0){
printf("%d is a Leap Year",n);
}else{
printf("%d Not a LeapYear",n);
}
}else{
printf("%d is a Leap Year",n);
}
}else{
printf("%d Not a LeapYear",n);
}

    return 0;
}