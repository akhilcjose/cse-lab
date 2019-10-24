#include<stdio.h>
#include<stdlib.h>
struct node{
             int data;
             struct node* left,* right;
            };
struct node* root,* ptr,* parent,* succ;
void insert(int key)
{
 int flag;
 struct node* newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode== NULL)
   {
    printf("\nno space");
   }
 else
   {
    if (root ==NULL)
       {
        root = newnode;
        }
    else
      {
       ptr=root;
       flag=0;
       while((ptr!=NULL)&&(flag==0))
         {
          if(key<ptr->data)
            {
             parent =ptr;
             ptr=ptr->left;
             }
          else if(key>ptr->data)
               {
                parent=ptr;
                ptr=ptr->right;
               }
             else
               {
                flag=1;
                }
         }
        if(flag==1)
         {printf("\nelement already exist");
          }
        else
         {if(key>parent->data)
            {parent->right=newnode;}
          else
             {parent->left=newnode;} 
         }
       }
   }
}
void search(int key) 
{
 int flag;
 ptr=root;
 flag=0;
 while((ptr!=NULL)&&(flag==0))
      {
        if(key<ptr->data)
          {
           parent =ptr;
           ptr=ptr->left;
          }
        else if(key>ptr->data)
           {
            parent=ptr;
            ptr=ptr->right;
           }
           else
            {
             flag=1;
            }
         }
        if(flag==1)
         {printf("\nelement found");
          }
        else
         {printf("\nelement not found");}
}
void delete(int key1)
{
 int i,flag;
 if(root==NULL)
 {
  printf("tree is empty");
  }
 else
  {
   ptr=root;
   flag=0;
   while(ptr!=NULL&&flag==0)
    {
     if(key1<ptr->data)
       {
         parent =ptr;
         ptr=ptr->left;
        }
      else if(key1>ptr->data)
        {
         parent=ptr;
         ptr=ptr->right;
         }
         else
          {
           flag=1;
          }
     }
    if(flag==0)
      printf("element not found");
    else
     {
      if((ptr->left==NULL)&&(ptr->right==NULL))
          {if(parent->left==ptr)
              {parent->left=NULL;
              }
           else
              {parent->right=NULL;}
           free(ptr);
          }
      if((ptr->left!=NULL)&&(ptr->right!=NULL))
          {
           succ=ptr->right;
           while(succ!=NULL)
            {
             succ=succ->left;
            }
             i=succ->data;
             delete(succ->data);
             ptr->data=i;
           }
      else
          {
           if(parent->left==ptr)
            {
             if(ptr->left==NULL)
             {parent->left=ptr->right;}
             else
             {parent->left=ptr->left;}
            }
           else if(parent->right==ptr)
            {
             if(ptr->left==NULL)
               {parent->right=ptr->right;}
             else
               {parent->right=ptr->left;}
            }
           free(ptr);
          }
     }
  
  }

}
int main(void)
{
 int ch=0,dat,k=0;
 while(ch!=4)
 {
  printf("\n1.insert\n2.delete\n3.display\n4.exit\nenter choice :");
  scanf("%d",&ch);
  switch(ch)
   { 
    case 1:printf("\nenter data to be inserted: ");
           scanf("%d",&dat);
           insert(dat);
           break;
    case 2:printf("\nenter data to be deleted: ");
           scanf("%d",&dat);
           delete(dat);
           break;
    case 3://display();
           break;
    case 4:break;
    default:printf("invalid entry\n");
            break;
   }
 }
}


















