#include<stdio.h>
#include<stdlib.h>
struct node{
            int data;
            struct node*link;
           };
struct node*head;
void push(int data1)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
  printf("\nNo Space");
 else
 {
  newnode->data=data1;
  if(head==NULL)
  {
    newnode->link=NULL;
    head=newnode;
   }
  else
 {
  newnode->link=head;
  head=newnode;
  }
 }
}
void pop()
{
 struct node *temp;
 int d;
 if(head==NULL)
 {
  printf("stack is empty");
 }
 else
 temp=head;
 {
  d=temp->data;
  printf("poped element is%d",d);
  head=head->link;
  free(temp);
 }
}
void display()
{
 struct node *temp;
 if(head==NULL)
   printf("\nList is empty" );
 else
 {
 temp=head;
 do
  {
   printf("%d-->",temp->data);
   temp=temp->link;
  }while(temp!=NULL);
 }
}

int main(void)
{
 int ch=0,dat,k=0;
 while(ch!=4)
 {
  printf("\n1.push\n2.pop\n3.display\n4.exit\nenter choice :");
  scanf("%d",&ch);
  switch(ch)
   { 
    case 1:printf("\nenter data to be pushed: ");
           scanf("%d",&dat);
           push(dat);
           break;
    case 2:pop();
           break;
    case 3:display();
           break;
    case 4:break;
    default:printf("invalid entry\n");
            break;
   }
 }
} 
