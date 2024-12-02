#include<stdio.h>
float si(float p,float r,int T)
{
float z=p*r*T*0.01;
return z;
}
int main()
{
float b,c;
float a;
int d;
scanf("%f%f%d",&b,&c,&d);
a=si(b,c,d);
printf("%f",a);
return 0;
}
