#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*link;
};
struct node *head;
void insert(int x,int pos)
{
 struct node *newnode,*temp;
 int count=1,c=0;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
  printf("\nNo Space");
 else
 {
  if(head==NULL)
  {
   if(pos==1)
    {
    newnode->data=x;
    newnode->link=NULL;
    head=newnode;
   }
     
   else
    printf("\nCannot insert.Link list is empty.");
  }
 
  else
  {
   temp=head;
   while(temp->link!=NULL);
   {
    temp=temp->link;
    count++;
   }
   if((pos>count+1)||(pos==0))
    printf("\nPosition invalid");
   else
    {
     temp=head;
     while(c<pos)
     {
      temp=temp->link;
      c++;
     }
     newnode->data=x;
     if(count==pos)
       {newnode->link=NULL;
         temp->link=newnode;}
     else
       {newnode->link=temp->link;
        temp->link=newnode;}
  }
 }
 }
}
void delete(int pos)
{
 struct node*temp,*temp1;
 int c;
 if(head==NULL)
  printf("\nList is empty");
 else
  {
   temp=head;
   c=1;
   while(c<=pos)
   {
    temp1=temp;
    temp=temp->link;
    c++;
   }
   temp1->link=temp->link;
   free(temp);
  }
}
int search(int key)
{
 struct node*temp;
 int flag,count;
 if(head==NULL)
  printf("\nList is empty" );
 else
  {
   temp=head;
   count=0;
   flag=0;
   while(temp->link!=NULL)
   {
    count++;
    if(temp->data==key)
      {
       flag=count;
       break;
      }
    temp=temp->link;
   }
  }
 return flag;
}
void traverse()
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
  }while(temp->link!=NULL);
 }
 
} 
int main(void)
{

  int x,pos,ch,key,c;
  
  while(1)
  {
   printf("\n\t\tMENU\n\t1.Insertion\n\t2.Deletion\n\t3.Search\n\t4.Traverse\n\t5.Exit\nEnter    choice: ");
   scanf("%d",&ch);
   if(ch==5)
      break;
   switch(ch)
   { 
     case 1:printf("\nEnter data and position to be inserted: ");
            scanf("%d %d",&x,&pos);
            insert(x,pos);
            break;
     case 2:printf("\nEnter position to be deleted from: ");
            scanf("%d",&pos);
            delete(pos); 
            break;
     case 3:printf("\nEnter data to be searched for: ");
            scanf("%d",&key); 
            c=search(key);
            if(c==0)
              printf("\nNot found");
            else
              printf("\nData found at postion %d",c);
            break;
     case 4:traverse(); 
            break;
     default:printf("\nInvalid choice");
   } 
  }
} 

     


   
