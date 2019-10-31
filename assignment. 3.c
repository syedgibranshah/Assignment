#include<stdio.h>

int main()
{
    float pounds, kg;
    int choice;
    printf("Enter the amount \n");
    scanf("%f",&pounds);
    scanf("%d", &choice);
    if (choice ==1)
    pounds = kg*2.20;
    {
    printf(" \nThe pounds is = %f",pounds);
    }
    if (choice == 2)
    kg = pounds/10;
    {
    printf("\nThe kg is = %f", kg);
    }
    return 0;
}