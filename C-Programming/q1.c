#include<stdio.h>
int main()
{
int s1, s2, s3;

printf(" enter the sides of the triangle \n");
scanf("%d %d %d ", &s1, &s2, &s3);
if(s1==s2 && s2==s3 && s1==s3)
{
printf("it is a equilateral triangle\n");
}
else if(s1==s2 || s2==s3 || s1!=s3)
{
printf("it is an isosceles triangle\n");
}
if(s1!=s2 && s2!=s3 && s3!=s1)
{
printf("it is a scalane triangle\n");
}
return 0;
}
