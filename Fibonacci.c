#include<stdio.h>

int main()
{
 int n,i, a=1,b=1, c;
printf("Enter a number");
scanf("%d", &n);
for(i=1; i<=n; i++)
{ 
c=a+b;
printf("%d\n", c);

a=b;
b=c;
}

return 0;
}