#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[100],temp,i,j;
clrscr();
printf("Enter no. of elements \n");
scanf("%d",&n);
printf("Enter no.s \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<=n-1;i++)
{
j=i;
while(j>0&&arr[j]<arr[j-1])
{
temp=arr[j];
arr[j]=arr[j-1];
arr[j-1]=temp;
j--;
}
}
printf("ascending order: \n");
for(i=0;i<=n-1;i++) {
printf("%d",arr[i]);
}
getch();
}