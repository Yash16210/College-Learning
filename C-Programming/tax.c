#include<stdio.h>
int main()
{
float income,tax;
printf("enter your income:\n");
scanf("%f",& income);

if (income<=2,50,000)
{
tax = 0;
}
else if (income >2,50,001 && income<=5,00,000)
{
tax = 0.05*income;
}
else if ( income>5,00,001 && income <=10,00,000)
{
tax = 0.2*income;
}
else
{
tax = 0.3*income;
}
income = income + tax;

printf("your tax is %f and your amount to be paid is %f", tax, income);
return 0;
}
