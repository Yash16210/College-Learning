#include<stdio.h>
int main()
{
   unsigned int x;
   short int y;
   long int z;
   long long int w;
   unsigned long long int a;
   float b;
   double c;
   long double d;
   printf("enter nan unsigned int:"\n);
   scanf("%u",&x);
   printf("enter a short int :"\n);
   scanf("%hd",&y);
   printf("enter a long int :"\n);
   scanf("l*ld",&z);
   printf("enter a long long int :"\n);
   scanf("l*lld",&w);
   printf("enter a unsigned long long int :\n");
   scanf("l*llu", &a);
   printf("enter a float : \n");
   printf("\n---output---\n");
   printf("unigned int : %u \n, x);
   return 0;
   }
