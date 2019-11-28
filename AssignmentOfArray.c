#include <stdio.h>
int main()
{
 int a[2][2], b[2][2], result[2][2],mul[2][2],i,j; 
 printf("Enter elements of 1st matrix:\n"); 
for (i=0;i<2;i++)
 for (j=0;j<2;j++)
 {
 scanf("%d",&a[i][j]);
 }
 printf("Enter elements of 2nd matrix:\n");
 for (i=0;i<2;i++)
 for (j=0;j<2;j++) 
{ 
scanf("%d", &b[i][j]); 
}
for (i=0;i<2;i++)
 for (j=0;j<2;j++)
 { 
result[i][j] = a[i][j] + b[i][j]; 
 } 
printf("Sum Of Matrix is\n");
for (i=0;i<2;i++) 
 for (j=0;j<2;j++) 
{ 
printf("%d\t", result[i][j]); 
if (j == 1) printf("\n");
 }

for (i=0;i<2;i++)
 for (j=0;j<2;j++)
 { 
result[i][j] = a[i][j] * b[i][j]; 
 } 
printf("multiplication Of Matrix is\n");
for (i=0;i<2;i++) 
 for (j=0;j<2;j++) 
{ 
printf("%d\t", result[i][j]); 
if (j == 1) printf("\n");
 }

return 0;
}
