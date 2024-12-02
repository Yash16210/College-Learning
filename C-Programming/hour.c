#include<stdio.h>
int main()
{
int h1, m1, c1;
int h2;
printf("enter the hours in 12 hour formation");
scanf("%d",&h1);
printf("enter the minutes in 12 hour formation");
scanf("%d",&m1);
printf("enter 0 for am and 1 for pm");
scanf("%d",&c1);

if (c1==0)
{
printf("time in 24 hour format is %d:%d",h1,m1);
}
else if (c1==1)
{
h2 = h1+12;
printf("time in 24 hour format is %d:%d",h2,m1);
}
else
{
printf("wrong input");
goto end;
}
end:
return 0;
}
