#include<stdio.h>
int main()
{
	int k,n,i;
	scanf("%d",&n);
	for(i=3;i>=0;i--)//3 is for to print byte of num ,if 31 is taken 32 bytes of num is printed
	{
	    k=n>>i;
	    if(k&1==1)
	    {
	        printf("1");
	    }
	    else
	    {
	        printf("0");
	    }
	}
	
}
