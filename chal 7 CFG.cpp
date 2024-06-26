#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	char str[100];
	printf("enter a string :");
	scanf("%s",str);
	n=strlen(str);
	printf("%d",n);
	printf("\n%s",str);
	
	for(i=0;i<n;i++)
	{
		if(str[0]=='0')
		{
			i=0;
			if(str[i+1]=='1'&&str[i+2]=='0'&&str[i+3]=='1')
			{
				printf("\nValid grammer");
				break;
			}
			else
			{
				printf("\nInvalid");
				break;
			}
		}
		if(str[0]=='1')
		{
			i=0;
			if(str[i+1]=='1'&&str[i+2]=='0'&&str[i+3]=='1')
			{
				printf("\nValid grammer");
				break;
			}
			else
			{
				printf("\nInvalid");
				break;
			}
		}
		if(str[i+1]=='1'&&str[i+2]=='0'&&str[i+3]=='1')
			{
				printf("\nValid grammer");
				break;
			}
			else
			{
				printf("\nInvalid");
				break;
			}
	}
}
