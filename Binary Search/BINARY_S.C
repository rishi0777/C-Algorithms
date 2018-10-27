#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,f,m,l,s,arr[100];
clrscr();
printf("Enter no. of elements \n");
scanf("%d",&a);
printf("Enter integers in asceding order \n");
for(n=0;n<a;n++)
scanf("%d",&arr[n]);
printf("Enter no. which you are finding \n");
scanf("%d",&s);
f=0;
l=n-1;
while(f<=l)
{
m=(f+l)/2;
if(arr[m]==s)
{
printf("%d found at position %d",s,m+1);
break;
}
else if(arr[m]<s)
{
f=m+1;
}
else
{
l=m-1;
}
}
if(f>l)
printf("not found ");
getch();
}

