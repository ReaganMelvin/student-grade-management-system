#include<stdio.h>
int main()
{
int marks1;
int marks2;
int marks3;
int total;
float average;
char name[50];
printf("Enter your name:");
scanf("%s",&name);
printf("\nENTER YOUR MARKS\n");
printf("Mathematics:");
scanf("%d",&marks1);
printf("English:");
scanf("%d",&marks2);
printf("Kiswahili:");
scanf("%d",&marks3);
if(marks1<0||marks1>100||marks2<0||marks2>100||marks3<0||marks3>100)
  printf("Invalid marks\n");
total=marks1+marks2+marks3;
average=total/3;
if (average>=80 &&average>!100)
{
  printf("Grade:A\n");
}
else if(average>=70)
{
  printf("Grade:B\n");
}
else if(average>=60)
{
  printf("Grade:C\n");
}
else if(average>=50)
{
  printf("Grade:D\n");
}
else if(average<50 &&average<!0)
{
  printf("Grade:E\n");
}
else
  printf("Grade:INVALID\n");
return 0
  }
