#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float r1,r2,d,real,image;
printf("enter the coefficient a,b and c:");
scanf("%d %d %d",&a ,&b ,&c);
d = b*b - 4*a*c;
if(d>0){

r1=(-b+sqrt(d))/2*a;
r2=(-b-sqrt(d))/2*a;
printf("roots are real and distint
 %.2f %.2f \n",r1,r2);
}
else if(d==0)
{
r1=-b/(2*a);
printf("roots are real and equal: %.2f
 and %.2f \n",r1,r2");

else
{
real=-b/(2*a);
image=sqrt(-d)/(2*a);
printf("roots are complex : %.2f + %.2f and  %.2f - %.2f");
real,image,real,image");
}
return 0;
}
