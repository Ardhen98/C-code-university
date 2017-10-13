#include <stdio.h>
#include <math.h>
void newtonsMethod(double a, double x0, double tol, double nmax);

int main(void)
{

double a, x0, tol, nmax;

printf("Enter a positive number a: ");

scanf("%lf", &a);

printf("ENter intial guess x0: ");

scanf("%lf", &x0);

printf("Enter tolerance: ");

scanf("%lf",&tol);

printf("Enter max number of iteration: ");

scanf("%lf", &nmax);

if(a < 0)

{

printf("Please enter a postive number\n");

a = a*-1;

printf("Square root for negative number you have entered has been show below if it was positive\n");

}

newtonsMethod(a,x0,tol,nmax);

return 0;

}



void newtonsMethod(double a, double x0, double tol, double nmax)
{

double x = x0;

double prevx = 0;

int n = 0;

do

{

prevx = x;

x = 0.5*(x + a/x);

n++;

}while((fabs(x - prevx)) > tol && n < nmax);

if(nmax == n)

{

printf("Max iterations %d reached, |x_{n+1} - x_n| = %.1e\n", n, fabs(x - prevx));

}

printf("sqrt(%g): %.13e, number of iterations:%d\n",a,x,n);

}
