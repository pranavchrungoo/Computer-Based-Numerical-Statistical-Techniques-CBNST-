#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) x*x*x-3*x-5
#define ff(x) 3*x*x-3
void NewtonRaphson(float,float);
int main()
{
float x0,x1,f0,f1,e;
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
NewtonRaphson(x1,e);
}
void NewtonRaphson(float x0,float e)
{
    int itr=0;
    float f0,ff0,x1;
do
{
itr=itr+1;
f0=f(x0);
ff0=ff(x0);
x1=x0-f0/ff0;
x0=x1;
printf("Root at %d iteration is %f\n",itr,x0);
}while(fabs(f0)>e);
printf("\nThe final root is %f at %d iteration",x1,itr);
}

