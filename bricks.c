#include<stdio.h>
#include<stdlib.h>

int main()
{
int  small ,big,goal;
printf("enter the  no.of small brickes: ");
scanf("%d",&small);
printf("enter the no.of big brickes: ");
scanf("%d",&big);
printf("enter the no.of  inches: ");
scanf("%d",&goal); 
int req =goal/5;
int rem = goal-req*5;
 if(rem<=big)
 { 
int rem = goal-req*5;
 if(rem<=small) {
 printf("true");
 }
   
else
{
printf("false");
}
}
else
{ int rem = goal-big*5;
 if(rem<=small) {
 printf("true");
 }
   
else
{
printf("false");
}
}
    return 0;
}