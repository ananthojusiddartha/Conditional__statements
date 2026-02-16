//Program to display loging page by accepting user id and password from the users by checking whether given user and password matches or not
#include<stdio.h>
int main()
{
int uid;
int upwd;
int id=7963;
int pwd=5321;
printf("Enter the user id: \n");
scanf("%d",&uid);
if(uid==id)
{
printf("Enter password: \n");
scanf("%d",&upwd);
if(upwd==pwd)
  {
    printf("Login successful");
  }
else
 {
   printf("Incorrect password");
 }
}
else
{
  printf("User doesn't exist");
}
    return 0;
}