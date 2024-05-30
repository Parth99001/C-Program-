#include<stdio.h>
int main(){
    int marks;
    char grade;
    printf("Write your Marks :",marks);
    scanf("%d",&marks);
    if(marks>90 && marks<=100){
        grade ='A';
        printf("Grade A ");
    }else if(marks>80 && marks<=90){
        grade ='B';
        printf("Grade B ");
    }else if(marks>70 && marks<=80){
        grade ='C';
         printf("Grade C ");
    }else if(marks>60 && marks<=70){
        grade ='D';
    printf("Grade D ");
    }else if(marks>50 && marks<=60){
        grade ='E';
    printf("Grade E ");
    }else{
        grade ='F';
    printf("Grade F ");
    }
    switch(grade){
        case 'A':
        printf("Excellent Work ");
        break;
         case 'B':
        printf("Well Done ");
        break;
         case 'C':
        printf("Good Job ");
         break;
         case 'D':
        printf("You Passed ");
         break;
         case 'E':
        printf("Fail Try Again ");
         break;
         case 'F':
        printf("You can not Do any thing in life ");
    }
    if(grade=='A' || grade=='B' || grade=='C' || grade=='D'){
        printf("Excellent Work! You are eligible for the next level");
    }else{
        printf("Please Don't Try again next year");
    }
    return 0;
}