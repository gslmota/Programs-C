#include<stdio.h>
int main()
{
	char str1[50],str2[50],str3[100];
	int i,c=0;
	printf("Digite duas strings: ");
	gets(str1);
	fflush(stdin);
	gets(str2);
	for(i=0;i<50;i++)
	{
		str3[i]=str1[i];
	}
	for(i=0;i<50;i++)
	{
		if(str3[i]='\0')
		{
			c++;
		}
	}
	for(i=0;i<50;i++)
	{
		if(str3[i]=='\0')
		{
			str3[i]==str2[i-c];
		}
	}
	printf("%s",str3);
	return 0;
}
