#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a: \n");
scanf("%d",&a);
printf("Enter the value of b: \n");
scanf("%d",&b);
printf("Enter the value of c: \n");
scanf("%d",&c);
if(a==2&&b==2&&c==2)
{
printf("10");
}
else if(a==b&&b==c&&c==a)
  {
    printf("5");
  }
else if(b!=a&&c!=a)
 {
   printf("1");
 }
else
{
  printf("0");
}
    return 0;
}