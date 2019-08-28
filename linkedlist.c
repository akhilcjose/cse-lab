#include<stdio.h>

struct node{
            int data;
            struct node* link;
           };

void insertion(struct node* head,int x,int dat){
{
 int count=1;
 struct node*newnode;
 if (pos<count)
  {
   printf("invalid pos");
  }
 else
  newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
  {
   printf("no space left")
  }
 else
  newnode->data=dat;
 if(head==NULL)
  {
   head=newnode;
  }
 else
   struct node* temp;
   temp=head;
    while(temp->link!=NULL)
    {
     if(x==1)
     {
      newnode-.link=head;
      head=newnode;
      break;
     }
     if(count==x-1)
     {
      newnode->link=temp->link;
      temp->link=newnode;
      break;
     }
     if(count+1==x)
     {
      newnode->link=temp->link;
      temp->link=newnode;
      break;
     }
     temp=temp->link;
     count=count+1;
    }
    if(count+1<x)
    {
     printf("pos invalid")
    }
}

void deletion(struct node* head,int x)
{
 int count=1
 if(head==NULL){
    printf("empty");
    }
 struct node* temp;
 struct node* temp1;
 struct node* temp2;
 temp=head;
 if(x==1){
    head=head->link;
    free(temp)
    }
 else
  while(temp2->link!=NULL){
    if(count==x){
       temp1=temp2;
       free(temp);
    }
    temp1=temp;
    temp=temp->link;
    temp2=temp->link;
    count=count+1;
  }
  if(count==x){
     temp1=temp;
     temp=temp->link;
     free(temp);
    }
}
void searching(struct node* head,int data)
{
 int count=1;
 if(head == NULL)
 {
     printf("not found")
 }
 struct node* temp;
 temp=head;
 while(temp->link!=NULL)
 {
  if(temp->data==data)
  {
   printf("fount at %d",count);
   break;
  }
  temp=temp->link;
  count=count+1;
 }
}

void traversal(struct node* head)
{
 int count=1;
 struct node* temp;
 temp=head;
 while(temp->link!=NULL){
    printf("%D->",temp->data);
    temp=temp->link;
 }
}

int main()
{
struct node* head;
int c=0;
int data1,pos;
while (c!=5)
{
    printf("1.insertion");
    printf("2.deletion");
    printf("3.search");
    printf("4.print all")
    printf("5.exit");
    printf("enter your choice");
    scanf("%d",&c);
    switch (ch)
    {
        case 1:printf("enter data and position to be inserted");
               scanf("%d",&data1);
               scanf("%d",&pos);
               insertion(&head,pos,data1);
               break;
        case 2:printf("enter position to be deleted");
               scanf("%d",&pos);
               deletion(&head,pos);
               break;
        case 3:printf("enter data to be searched");
               scanf("%d",&data1);
               searching(&head,data1);
               break;
        case 4:traversal(&head);
               break;
        case 5:break;


    }
}
}
