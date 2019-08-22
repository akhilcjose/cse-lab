#include<stdio.h>
struct node{
            int data;
            struct node* link;
           };
void insertion(struct node* head,int x,int dat){
{
 int count=1;
 struct node*newnode; 
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=dat;
 if(newnode==NULL)
 {
  printf("no space left")
 }
 else
 if(head==NULL)
 {
  head=newnode;
 }
 else
 struct node* temp;
 temp=head;
 while(temp->link!=NULL)
 {
  if(count==x)
  {
   if(count =1)
    {
     newnode->link=temp;
     head=newnode;
     break;
     }
   newnode->link=temp->link;
   temp->link=newnode;
   break;
  }
  temp=temp->link;
  count=count+1;
 }
 if(count<x)
 {
  printf("pos invalid")
 }
}
void deletion(struct node* head,int pos)
{
}
void searching(struct node* head,int data)
{
 int count=0;
 struct node* temp;
 temp=head;
 while(temp->link!=NULL)
 {
  count=count+1;
  if(temp->data==data)
  {
   printf();
  }
  temp=temp->link;
 }
}
void traversal()
{
}

  
  
  
