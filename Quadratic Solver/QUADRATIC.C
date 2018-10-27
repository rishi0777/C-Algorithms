#include<conio.h>
#include<math.h>
#include<stdio.h>
void main(){
int a,b,c;
float d,r1,r2,i1;
clrscr();
printf("Quadratic Equation Solver \n");
printf("Form : Ax^2 + Bx + C \n");
printf("Enter value of A :");
scanf("%d",&a);
printf("Enter value of B :");
scanf("%d",&b);
printf("Enter value of C :");
scanf("%d",&c);
d=b*b-4*a*c;
if(d>0){
r1=(-b+sqrt(d))/(2.0*a);
r2=(-b-sqrt(d))/(2.0*a);
printf("The Roots of Equation %dx^2 + %dx + %d = 0 are %f and %f",a,b,c,r1,r2);
}
else if (d==0){
r1=-b/(2*a);
r2=-b/(2*a);
printf("The Roots of Equation %dx^2 + %dx + %d = 0 are %f and %f",a,b,c,r1,r2);
}
else if(d<0){
i1=sqrt(-d);
r1=-b/(2.0*a);
r2=-b/(2.0*a);
printf("The Roots of Equation %dx^2 + %dx + %d = 0 are : \n",a,b,c);
printf("1. %f + i%f \n",r1,i1);
printf("2. %f - i%f \n",r2,i1);
}
getch();
}