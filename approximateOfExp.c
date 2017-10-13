#include<stdio.h>

double factorial(double x);

double exponent(double a, int b);

void approximationOfexp(double a);



int main(void)
{

double x;

printf("Enter value for x: ");

scanf("%lf",&x);

approximationOfexp(x);

return 0;

}


double exponent(double a, int b)
{

double power=1;

for(int i=0; i<b; i++)

{

power=a*power;

}

return power;

}


double factorial(double x)
{

double factorial=1;

for(double i=1.0;i<=x;i++)

{

factorial *= i;

}

return(factorial);

}


void approximationOfexp(double a)
{

double approxOfexp=0;

double f;

int n = 0;

do

{

f = approxOfexp;

approxOfexp += exponent(a,n)/factorial(n);

n++;

}while(f != approxOfexp);


printf("Approximation of e(%g) is %.12e with %d approximations.\n",a, approxOfexp, n-1);

}


