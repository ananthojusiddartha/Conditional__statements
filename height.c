#include<stdio.h>
int main()
{
char Gender;
float feet;
printf("Enter B for Boy or G for Girl\n");
scanf("%c",&Gender);
if(Gender=='B')
{
printf("Enter the height of the Boy: \n");
scanf("%f",&feet);
if(feet>=6.5)
{
printf("The Boy is tallest of all");
}
else if(feet>=6)
{
printf("The Boy is tall");
}
else
{
printf("The Boy is Short");
}
}
else
{
printf("Enter the height of the Girl: \n");
scanf("%f",&feet);
if(feet>=6.5)
{
printf("The Girl is tallest of all");
}
else if(feet>=6)
{
printf("The Girl is tall");
}
else
{
printf("The Girl is Short");
}
}
return 0;
}