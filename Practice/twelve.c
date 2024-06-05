#include<stdio.h>
int main(){
   float r,h,p;
   printf("Enter the Value of Radius :");
   scanf("%f",&r);
   printf("Enter The Value of height :");
   scanf("%f",&h);
   p=3.14;
   float Volume=p*r*r*h;
   printf("Volume Of Cylinder %f\n",Volume);
    return 0;
}