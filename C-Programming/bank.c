#include<stdio.h>
int main()
{
int type;
float amount, interest;
printf("press 0 for saving accounts:\n");
printf("press 1 for currenrt accounts:\n");
scanf("%d",&type);
printf("enter the amount in account:\n");
scanf("%f",&amount);

if(type==0)
{
interest= 0.05*amount;
}
else if(type==1)
{
interest = 0.01*amount;
}
printf("wrong input\n");

{
printf("interest is %f",interest);
}
return 0;
}
