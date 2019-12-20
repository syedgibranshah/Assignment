#include <stdio.h>

int main()
{

	int salary,ysal,result;
   float tax;
    printf("Enter Your Monthly Salary\n");
    scanf("%d",&salary);
    result = salary * 12;
    printf("Press 1 to Check Yearly Salary\n");
    scanf("%d",&ysal);
   printf("%d is your Yearly salary\n",result);
   tax=0;


	if (salary>=1200000 && salary<=1800000)
		{

		tax = 1200000*5/100;
        tax = 1400000*7/100;
        tax = 1600000*9/100;
        tax = 1800000*11/100;
		}
	else if (salary<1200000)
        {
		printf("No Tax Applied");
	    }
	else if (salary>1800000)
		{
		    printf("Not Avalible");
		}
    else

	printf("THANK YOU");
	return 0;
}
