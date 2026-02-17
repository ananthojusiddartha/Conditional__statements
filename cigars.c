#include<stdio.h>
int main()
{
int cigars,weekend;
printf("Enter the no. of cigars: \n");
scanf("%d",&cigars);
printf("Enter 1 if it is weekend or 0 for not weekend: \n");
scanf("%d",&weekend);
if(weekend)
{
 if(cigars>40)
 {
 printf("true");
 }
 else
 {
 printf("false");
 }
}
else
  {
if(cigars>=40&&cigars<=60)
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