#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],ch,fin[100];
	int len,i,j;
	printf("enter a sting");
	gets(s);
	printf("enter a char");
	scanf("%c", &ch);
  	
	len = strlen(s);
	   	
  	for(i = 0; i < len; i++)
	{
	if(s[i] == ch)
		{
			for(j=i;j<len;j++)
			{
				s[j]=s[j+1];
			}
		}
	}
	printf("\n The Final String after Removing All Occurrences of '%c' = %s ", ch, s);
}
