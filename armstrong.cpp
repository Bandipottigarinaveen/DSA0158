#include<stdio.h>
#include<math.h>
int ArmstrongNumber(int num)
{
     if(num>0)
    return (pow(num%10,3) +ArmstrongNumber(num/10));
    else
    {
    	return num;
	}
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
   if(ArmstrongNumber(num)==num)
    printf("It is an Armstrong Number");
   else
    printf("It is not an Armstrong Number");
}
