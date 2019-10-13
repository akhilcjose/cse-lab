#include<stdio.h>
#define max 5
int front=-1;
int rear=-1;
int arr[max];
void insert(int data)
{
 if(front==0 && rear==max-1||front==rear+1)
 {
  printf("queue is full\n");
  }
 else
 {
   if(front==-1)
    {
     front=0;
     rear=0;
     arr[rear]=data;
    }
   else
    rear=(rear+1)%max;
    arr[rear]=data;
 }

}
void delete()
{
 int q;
 if(front==-1 )
 {
  printf("queue is empty\n");
  }
 else
 {
  q=arr[front];
  if(front==rear)
  {
      front=rear=-1;
  }
  else
  {
      front=(front+1)%max;
  }
  printf("deleted element is %d",q);
 }
}
void display()
{
 if(front==-1||rear==-1)
 {
     printf("queue is empty");
 }
 else
 {
    if(front<rear)
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else if(rear<front)
    {
        for(int j=front;j<=max;j++)
            printf("%d",arr[j]);
        for(int k=0;k<rear;k++)
            printf("%d",arr[k]);
    }
 }
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
