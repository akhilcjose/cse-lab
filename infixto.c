#include<stdlib.h>
#include<stdio.h>
#include<string.h>
# define max 100
char arr[max];
char stack[max];
char arr1[max];
int checkoperator(char ch)
{
switch(ch)
 {
  case '+' :
  case '-' :return 1;
            break;
  case '*' :
  case '/' :return 2;
            break;
  case '^' :return 3;
            break;
  default  :return 0;
 }
}
void infixposfix()
{
 int count=0;
 for(int i=0;arr[i]!='\0';i++)
  {
   if (checkoperator(arr[i])==0)
    {
     arr1[count]=arr[i];
    }
   else 
    {}
  }
}
void evaluation()
{
 
}
int main(void)
{
 int i=0;
 printf("enter the expression to be evaluvated:");
 scanf("%s",arr);
for(int i=0;arr[i]!='\0';i++){
 printf("%c",arr[i]);
}
 infixposfix();
}
