#include<stdio.h>
int main()
{
	int k,n,i,cone=0,czero=0;
	scanf("%d",&n);
	for(i=31;i>=0;i--)//3 is for to print byte of num ,if 31 is taken 32 bytes of num is printed
	{
	    k=n>>i;
	    if(k&1==1)
	    {
	        cone++;
	    }
	    else
	    {
	        czero++;
	    }
	}
	printf("ones are %d\t",cone);
	printf("zeros are %d",czero);
	
}
