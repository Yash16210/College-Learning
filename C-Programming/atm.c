#include<stdio.h>
int main()
{
int balance,amount;
printf("enter current balance");
scanf("%d",&balance);
printf("enter amount to withdraw");
scanf("%d",&amount);
if(amount % 100!=0)

printf("error:amount must be multiple of 100 \n");
else if(amount > balance){

printf("insufficient balance \n");
}
else
{
 balance = amount;
printf("remaining balance %d \n",balance);
}
return 0;
}
