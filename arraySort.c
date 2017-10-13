#include <stdio.h>
#include <stdlib.h>
#define N 35

int main(void)
{

int x;

int A[N];

for(int i=0;i<N;i++)

A[i] = rand() % 10;

for(int k=0; k<N; k++)

{

for(int u=0; u<(N-k-1); u++)

{

if(A[u] > A[u+1])

{

x=A[u];

A[u]=A[u+1];

A[u+1]=x;

}

}

}

int a = 1;

while(a != N)

{

printf("%d",A[a-1]);

if((a%10)==0)

{

printf("\n");

}

a++;

}

printf("\n");

return 0;

}
