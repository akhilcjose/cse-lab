#include<stdio.h>
struct node{
            int data;
            struct node* link;
           };
void insertion(struct node* head,int x,int dat){
{
 int count=0;
 struct node*newnode; 
 newnode=(struct node*)malloc(sizeof(struct node));
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
  count=count+1;
  if(count==x)
  {
   newnode->link=temp->link;
   temp->link=newnode;
  }
  temp=temp->link;
 }
 if(count<x)
 {
  printf("pos invalid")
 } 
  
  
