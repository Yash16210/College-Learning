#include<stdio.h>
int main()
{
int period='p';
int hour, minute;

if(period=='p'){
if(hour!= 12){
hour = 0;
}
printf("24-hour format: %.2d: %.2d\n",hour,minute);

}
int main(){

int hour,minute;
char period;
printf("enter time(hh:mm AM/PM):");
if(scanf("%d:%d %cM",&hour,&minute,&period)!=3)
{
printf("invalid inpuit format.\n");

}
if(hour < 1 || hour > 12 || minute < 0 || minute > 59 ||
(period!='a'&&period!='p' && period!='a' &&period!='p')){
printf("invalid time.\n");
}
return 0;
}
