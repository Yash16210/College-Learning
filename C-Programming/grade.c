#include<stdio.h>
int main()
{
float a,b,c,d,e,avg;

printf("enter the score of five subjects\n");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
scanf("%f",&d);
scanf("%f",&e);

 avg = ((a+b+c+d+e)/5.0);
if (avg>=40)
{
printf("A GRADE");
}
else if(avg<40 && avg>=80)
{
printf("B  GRADE");
}
else if(avg<80 && avg>=70)
{
printf("C GRADE");
}
else if(avg<70 && avg>=60)
{
printf("D GRADE");
}
else if(avg<60 && avg>=50)
{
printf(" E GRADE");
}
return 0;
}
