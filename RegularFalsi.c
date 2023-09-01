#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) x*x*x-3*x-5
void RegularFalsi(float,float,float,float,float);
void main()
{
float x0, x1, f0, f1, e;
up:
printf("Enter two initial guesses for the interval:\n");
scanf("%f %f", &x0, &x1);
printf("Enter tolerable error:\n");
scanf("%f", &e);
f0= f(x0);
f1 = f(x1);
if(f0*f1> 0.0)
{
printf("Incorrect Initial Guesses\n");
goto up;
}
RegularFalsi(x0,x1,f0,f1,e);
}
void RegularFalsi(float x0,float x1,float f0,float f1,float e)
{
    int itr=1;
    float x2,f2;
do
{
x2 = (x0*f1-x1*f0)/(f1-f0);
f2= f(x2);
printf("\nThe root is %f at %d iteration",x2,itr);
if(f0*f2<0)
{
    x1=x2;
    f1=f2;
}
else
{
    x0=x2;
    f0=f2;
}
itr=itr+1;
}while(fabs(f2)>e);
printf("\nThe root is %f at %d iteration",x2,itr);
}

