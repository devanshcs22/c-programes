#include<stdio.h>
int main()
{
int n,i,j,k,b[200],a[200],c=0;
printf("enter the size of array=");
scanf("%d",&n);
printf("enter the elements=");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
c=1;
if(a[i]!=-1)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
c++;	
a[j]=-1;
}
b[i]=c;
}
}
}
for(k=0;k<n;k++)
if(a[i]!=-1)
printf("%d occur %d times\n",a[k],b[i]);
return 0;
}
