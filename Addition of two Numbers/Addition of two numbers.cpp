#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int x,y,sum;
	
	printf("Enter First No\n");
	scanf("%d",&x);
	
	printf("Enter Second No\n");
	scanf("%d",&y);
	
	sum=x+y;
	
	printf("Sum of %d and %d is %d",x,y,sum);
	
	return(0);
}
