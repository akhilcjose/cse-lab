#include<stdlib.h>
#include<stdio.h>
struct node{
            int data;
            struct node* link;
            };
struct node *front,*tail;
void insertion(int data1)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
  printf("\nNo Space");
 else
 {
  newnode->data=data1;
  if(tail==NULL||front==NULL)
  {
    newnode->link=NULL;
    front=newnode;
    tail=newnode;
   }
  else
  {
   tail->link=newnode;
   tail=newnode;
  }
 }
}
void deletion()
{ 
 struct node *temp,*temp1;
 int d;
 if(front==NULL||tail==NULL)
  printf("\nList is empty");
 else
  {
   temp=front;          
   if(front==tail)
   {
    d=front->data;
    printf("poped element is%d",d);
    free(temp);
    front=NULL;
    tail=NULL;
   }
  else
  {
    d=temp->data;
    front=temp->link;          
    free(temp);
    printf("poped element is %d",d);
  }
}
}
void display()
{int d;
 struct node *temp;
 temp=front;
 if(tail==NULL||front==NULL)
   printf("\nList is empty" );
 else
 {
 while(temp!=NULL)
 {
   d=temp->data;
   printf("%d-->",d);
   temp=temp->link;
 }
 }
}
int main(void)
{
 int ch=0,dat,k=0;
 while(ch!=4)
 {
  printf("\n1.insertion\n2.deletion\n3.display\n4.exit\nenter choice :");
  scanf("%d",&ch);
  switch(ch)
   { 
    case 1:printf("\nenter data to be pushed: ");
           scanf("%d",&dat);
           insertion(dat);
           break;
    case 2:deletion();
           break;
    case 3:display();
           break;
    case 4:break;
    default:printf("invalid entry\n");
            break;
   }
 }
} 

