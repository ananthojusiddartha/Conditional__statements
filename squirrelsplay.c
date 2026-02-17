#include<stdio.h>
int main()
{
int temperature,summer;
printf("Enter the temperature: \n");
scanf("%d",&temperature);
printf("Enter 1 if it is summer or 0 for not summer: \n");
scanf("%d",&summer);
if(summer)
{
 if(temperature>60)
 {
 printf("true");
 }
 else if(temperature>90)
 {
 printf("false");
 }
}
else
  {
if(temperature>=60&&temperature<=90)
{
printf("true");
  }
else
{
  printf("false");
}
}
    return 0;
}