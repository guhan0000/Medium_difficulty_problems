#include<stdio.h>
int replace(int num1)
{
    int rev=0;
	int rem;

    if (num1==0)
    {
        num1=5;
    }
	while(num1!=0)
	{
	    	rem=num1%10;
	        if(rem==0)
	        {
		        rem=5;
        	}
		    rev=rev*10+rem;
		    num1/=10;
	}   
	return rev;
}
int reverse(int num1)
{
    int rev=0;
	int rem;

	while(num1!=0)
	{
	    	rem=num1%10;
		    rev=rev*10+rem;
		    num1/=10;
	}   
	return rev;
}
int main()
{
	int num1;
	scanf("%d",&num1);
	
	printf("%d",reverse(replace(num1)));
	
}
