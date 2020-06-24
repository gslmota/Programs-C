#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n=5;
	for(i=0;i<5;i++)
	{
		printf("%d\n", rand() % 20);
	}
	system("pause");
	main();
	return 0;
}
