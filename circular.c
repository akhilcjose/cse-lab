#include<stdio.h>
#define max 10
int front=-1;
int rear=-1;
int arr[max];
void insert(int data)
{
 if(front==0 && rear==max-1||front==rear+1)
 {
  printf("queue is full");
  }
 else
 {
   if(front=-1)
    {
     front=0;
     rear=0;
    }
   else
    if(rear=max-1)
     {
      rear=0;
     }
    else
     {
      rear=rear+1;
     }
   arr[rear]=data;
 }
 
}
void delete()
{
 if(front==-1 )
 {
  printf("queue is empty");
  }
 else
 {
  if(front=rear)
  {
   printf("deleted element is %d",arr[front]);
   front=rear=-1;
   }
  else 
   if(front = max-1)
   {
    printf("deleted element is %d",arr[front]);
    front=0;
    }
    else
    {
     printf("deleted element is %d",arr[front]);
     front=front+1;
    }
 }
}
void display()
{
}
int main(void)
{ 
 int ch=0,dat;
 while(ch!=4)
 {
  printf("\n1.insert\n2.delete\n3.display\n4.exit\nenter choice :");
  scanf("%d",&ch);
  switch(ch)
   { 
    case 1:printf("\nenter data to be pushed: ");
           scanf("%d",&dat);
           insert(dat);
           break;
    case 2:delete();
           break;
    case 3:display();
           break;
    case 4:break;
    default:printf("invalid entry\n");
            break;
   }
 }
}
