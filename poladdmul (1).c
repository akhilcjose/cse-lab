#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data,exp;
	struct node *link;
};
struct node *pheader,*qheader,*rheader,*pptr,*qptr,*rptr,*rptr2,*ptr,*newnode,*new2,*ptr,*prev;
void printall(struct node *head)
{
 int count=0;
 struct node*temp;
 temp=head;
 if(head!=NULL)
 	{
      while(temp!=NULL)
        {
         if(ptr->data<0)
          {
           printf("-%d*x^%d",temp->data,temp->exp);
          }
         else
         {
          printf("+%d*X^%d",temp->data,temp->exp);
         }
         temp=temp->link;
        }
 	}
 else
 {
     printf("empty linked list");
 }
}
void add()
{
	pptr=pheader;
	qptr=qheader;
	while(pptr!=NULL&&qptr!=NULL)
		{
			if(pptr->exp==qptr->exp)
			{
			    new2=(struct node*)malloc(sizeof(struct node));
			    new2->data=pptr->data+qptr->data;
				new2->exp=pptr->exp;
				new2->link=NULL;
			    if(rheader==NULL)
                {
                    rheader=new2;
                    rptr=rheader;
                }
                else
                {
                    rptr->link=new2;
				    rptr=new2;
                }
				pptr=pptr->link;
				qptr=qptr->link;
			}
			else if(pptr->exp>qptr->exp)
			{
			    new2=(struct node*)malloc(sizeof(struct node));
                new2->data=pptr->data;
				new2->exp=pptr->exp;
				new2->link=NULL;
                if(rheader==NULL)
                {
                    rheader=new2;
                    rptr=rheader;
                }
                else
                {
                    rptr->link=new2;
				    rptr=new2;
                }
				pptr=pptr->link;
			}
			else
			{	new2=(struct node*)malloc(sizeof(struct node));
				new2->data=qptr->data;
				new2->exp=qptr->exp;
				new2->link=NULL;
				if(rheader==NULL)
                {
                    rheader=new2;
                    rptr=rheader;
                }
                else
                {
                    rptr->link=new2;
				    rptr=new2;
                }
				qptr=qptr->link;
			}
		}
    if(pptr!=NULL&&qptr==NULL)
      {	while(pptr!=NULL)
          {
            new2=(struct node*)malloc(sizeof(struct node));
            new2->data=pptr->data;
            new2->exp=pptr->exp;
            new2->link=NULL;
            if(rheader==NULL)
                {
                    rheader=new2;
                    rptr=rheader;
                }
            else
                {
                    rptr->link=new2;
				    rptr=new2;
                }
           pptr=pptr->link;
          }
      }
    if(pptr==NULL&&qptr!=NULL)
      {	while(qptr!=NULL)
          {	new2=(struct node*)malloc(sizeof(struct node));
            new2->data=qptr->data;
            new2->exp=qptr->exp;
            new2->link=NULL;
            if(rheader==NULL)
                {
                    rheader=new2;
                    rptr=rheader;
                }
            else
                {
                    rptr->link=new2;
				    rptr=new2;
                }
            qptr=qptr->link;
          }
      }
printall(rheader);
}
void mul()
{
    pptr=pheader;
	qptr=qheader;
	rheader=(struct node*)malloc(sizeof(struct node));
	rheader->link=NULL;
	rptr=rheader;
	if(pptr==NULL||qptr==NULL)
    {
        printf("zero");
    }
	else
		{
		    while(pptr!=NULL)
			{	qptr=qheader->link;
				while(qptr!=NULL)
				{ newnode=(struct node*)malloc(sizeof(struct node));
				  if(rheader->link==NULL)
					{	rptr->link=newnode;
						rptr=newnode;
						rptr->data=pptr->data*qptr->data;
						rptr->exp=pptr->exp+qptr->exp;
						rptr->link=NULL;
					}
				  else	{	prev=rheader;
						rptr2=rheader->link;
						newnode->data=pptr->data*qptr->data;
						newnode->exp=pptr->exp+qptr->exp;
					while(rptr2!=NULL)
						{	if(rptr2->exp<newnode->exp)
							{	newnode->link=rptr2;
								prev->link=newnode;
								break;
							}
							else if(rptr2->exp==newnode->exp)
							{	rptr2->data+=newnode->data;
								break;
							}
							else
							{	rptr2=rptr2->link;
								prev=prev->link;
							}
						}
					if(rptr2==NULL)
						{	prev->link=newnode;
							newnode->link=NULL;
							rptr=newnode;
						}
					}
				qptr=qptr->link;
			 }pptr=pptr->link;}
		}
		printall(rheader);
}

void ins(struct node*head,int n1)
{	int i;
    struct node*temp;
	for(i=0;i<n1;i++)
	{
		printf("enter coeff and power of term %d\t",i+1);
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d %d",&newnode->data,&newnode->exp);
		newnode->link=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=head;
		}
		else
		{
		    temp->link=newnode;
		    temp=newnode;
			temp=temp->link;
		}
	}
}
int main()
{
	int n1,n2,ch;
	while(ch!=3)
	{
	  printf("\nenter choice\n1.add \n2.multiply\n3.exit\n");
      scanf("%d",&ch);
	  switch(ch)
	    {
         case 1:printf("enter no of terms in polynomial 1 \n");
                scanf("%d",&n1);
                printf("enter the terms of polynomial 1 in order\n");
                ins(pheader,n1);
                printf("enter no of terms in polynomial 2\n");
                scanf("%d",&n2);
                printf("enter the terms of polynomial 2 in order\n");
                ins(qheader,n2);
                add();
                break;
         case 2:printf("enter no of terms in polynomial 1 \n");
                scanf("%d",&n1);
                printf("enter the terms of polynomial 1 in order\n");
                ins(pheader,n1);
                printf("enter no of terms in polynomial 2");
                scanf("%d",&n2);
                printf("enter terms of polynomial 2 in order\n");
                ins(qheader,n2);
                mul(pheader,qheader);
                break;
         case 3:break;
        default:printf("enter valid choice");
	  }
   }
}


























































































