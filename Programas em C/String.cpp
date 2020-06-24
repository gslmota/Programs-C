#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[100],str3[100];
	char str2[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	int i,j;
	printf("Digite a mensagem: ");
	gets(str1);
	for(i=0;i!='\0';i++)
	{
		for(j=0;j<27;j++)
		{
			if(str1[i]==str2[j])
			{
				str3[i]==str2[j+3];
			}
		}
	}
	puts(str3);
	return 0;
}
