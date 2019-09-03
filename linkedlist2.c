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
 int count=1,c=1;
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
   if((pos>count+1)||(pos==0)||(pos<0))
    printf("\nPosition invalid");
   else
    {
     temp=head;
     while(c<(pos-1))
     {
      temp=temp->link;
      c++;
     }
     newnode->data=x;
     if(count+1==pos)
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
   temp1=head;
   c=1;
   while(c<pos)
   {
    temp1=temp;
    temp=temp->link;
    c++;
   }
   if(pos=1)
   {
    head=head->link;
    free(temp);
    }
   else
   {
    temp1->link=temp->link;
    free(temp);
   }
  }
}
int search(int x2)
{
 struct node*temp;
 int pos2,count;
 if(head==NULL)
  printf("\nList is empty" );
 else
  {
   temp=head;
   count=1;
   pos2=0;
   while(temp!=NULL)
   {
    if(temp->data==x2)
      {
       pos2=count;
       break;
      }
    temp=temp->link;
    count++;
   }
  }
 return pos2;
}
void printall()
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

  int x,pos,ch,x2,c=0;

  while(ch!=5)
  {
   printf("\n\tMENU\n1.Insertion\n2.Deletion\n3.Search\n4.print all\n5.Exit\nEnter choice: ");
   scanf("%d",&ch);
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
            scanf("%d",&x2);
            c=search(x2);
            if(c==0)
              printf("\nNot found");
            else
              printf("\nData found at position %d",c);
            break;
     case 4:printall();
            break;
     case 5:break;
     default:printf("\nInvalid choice");
   }
  }
}
