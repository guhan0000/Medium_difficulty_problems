#include<stdio.h>
int reverse(int x)
{
	int rev=0;
	int rem;
	while(x!=0)
	{
		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
	}
	return rev;
}
int palindrome(int num)
{
	int rever=reverse(num);
	if (rever==num)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}
int recursyn(int num1)
{
	int num2,sum;
	num2=reverse(num1);
	sum=num1+num2;
	if(palindrome(sum)==1)
	{
		return sum;
	}
	else
	{
		recursyn(sum);	
	}
	
}
int main()
{
	int num1;//num2,sum;
	scanf("%d",&num1);
//	num2=reverse(num1);
//	sum=num1+num2;

	printf("the result is %d",recursyn(num1));
//	printf("%d\n",reverse(num1));
//	palindrome(num1,reverse(num1));
}
