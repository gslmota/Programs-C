#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int mat[3][3];
	int i,j,m;
	do 
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&mat[i][j]);
			}
		}
	}while(mat[i][j]<0&&mat[i][j]>1);
	for(i=0;i<3;i++)
	{
		m=0;
		for(j=0;j<3;j++)
		{
			if(mat[i][j]>m)
			{
				m=mat[i][j];
			}
		}
			printf("\no maior valor da linha %d é: %d",i,m);
	}
	
	return 0;
}
