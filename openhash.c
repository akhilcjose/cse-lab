#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *h[50],*ptr,*ptr1,*new;

void ins(int val,int n)
{
	int i;
	i=val%n;
	h[i]=(struct node *)malloc(sizeof(struct node));
	ptr=h[i];
	new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->link=NULL;
	int flag=0;
	if(h[i]==NULL)
	{	printf("kk");
		ptr->link=new;

	}
	else
	{
		while(ptr!=NULL && flag==0)
		{

			if(ptr->data==val)
			{
				flag=1;printf("go");
				break;
			}
			else
			{
				ptr=ptr->link;
			}
		}
		if(flag==0)
			ptr->link=new;
		else
			printf("data already exists\n");
	}
}
void search(int key,int n)
{
	int i=key%n;
	ptr1=h[i];
	int flag=0;
	while(ptr1!=NULL && flag==0)
	{	printf("ojo");
		if(ptr1->data==key)
			flag=1;
		else
			ptr1=ptr1->link;
	}
	if(flag==1)
			printf("element found\n");
	else printf("element not found\n");
}
int main()
{
	int i,ch,n,key;
	printf("enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			h[i]=(struct node *)malloc(sizeof(struct node));
			h[i]=NULL;
	}
	while(1)
	{
		printf("\nenter choice 0.exit 1.insert 2.search 3.print\n");
		scanf("%d",&ch);
		if(ch==0)	exit(0);
		else if(ch==1)
		{
			printf("enter key: ");
			scanf("%d",&key);
			ins(key,n);
		}
		else if(ch==2)
		{
			printf("enter search element: ");
			scanf("%d",&key);
			search(key,n);
		}
	}
}
