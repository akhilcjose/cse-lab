#include <stdio.h>
int a[10];
int linearsearch(int n,int y)
{
 int d=0;
 for(int i=0;i<n;i++){
  if(y==a[i])
   {
    d=i+1;
    return d;
   }
 }
 return 0;
}
int main()
{
 int j,k,l,n,temp,q;
 int e=0;
 printf("enter no of elements");
 scanf("%d",&n);
 printf("enter %d elements",n);
 for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
 }
 printf("enter element to be searched");
 scanf("%d",&k);   
 j=linearsearch(n,k);
 if(j>0)
 {
  printf("element is found at %d ",j);
 }
 else
 printf("element not found");
}         

