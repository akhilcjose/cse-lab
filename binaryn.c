#include <stdio.h>
int a[10];
int binaryn(int t,int q, int r)
{
 int s=0;
 int front=q;
 int back=r;
 int mid;
 while(front<back)
 {
  mid=(front+back)/2;
  if(a[mid]==t)
  {
   s=mid+1;
   return s;
  }
  else if(t<a[mid])
   {
    back=mid-1;
   }
  else if(t>a[mid])
   {
    front=mid+1;
   }
 } 
 return 0;
}
void sortn( int n)
{
 int temp;
 for(int i=0;i<n;i++){
  for(int u=i+1;u<n;u++){
   if(a[i]>a[u]){
    temp=a[u];
    a[u]=a[i];
    a[i]=temp;
   }
  }
 }
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
 sortn(n);
 q=binaryn(k,e,n);
 if(q>0)
 {
  printf("element is found at %d ",q);
 }
 else
 printf("element not found");
}
