#include<stdio.h>
void Addition(int a[5][5],int b[5][5],int n,int m,int i,int j);
void Multiplication(int a[5][5],int b[5][5],int n,int m,int i,int j);
void Transpose(int a[5][5],int b[5][5],int n,int m,int i,int j);


void main()
{
	int n,m,i,j,ch;

	int a[5][5],b[5][5],c[5][5];
	printf("Enter the size of  A MAtrix:");
	scanf("%d",&n);
	printf("Enter the size of B Matrix:");
	scanf("%d",&m);
	printf("Enter the Element in A:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)

		scanf("%d",&a[i][j]);
	}
	printf("Enter the Element in b:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&b[i][j]);

	}

	do
	{
		printf("\n*********************************\n");
		printf("1.Addition\n");
		printf("2.Multiplication\n");
		printf("3.Transpose\n");
		printf("4.Exist\n");
		printf("***********************************\n");
		printf("Enter your choice::\n");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:Addition(a,b,i,j,m,n);
		break;

		case 2:Multiplication(a,b,i,j,m,n);
		break;

		case 3:
		 for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
			 		c[i][j]=a[j][i];
				}
			}
				printf("\n Transpose is:\n");
				for(i=0;i<n;i++)
				{
					for(j=0;j<m;j++)
					{
					printf("%d\t",c[i][j]);
					}
					printf("\n");
				}
				break;
		 case 4: break;
			default :
				printf("Please Enter the valid choice:\n");
				break;

		}// switch case close
	}while(ch!=5);

}


void Addition(int a[5][5],int b[5][5],int n,int m,int i,int j)
{


	int c[5][5];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		printf("\t%d",c[i][j]);
		}
	}


}

void Multiplication(int a[5][5],int b[5][5],int n,int m,int i,int j)
{


	int c[5][5];
	int p,q,k,sum=0,multiply[i][j];
	printf("Enter the no of row and cols.of first matrix:");
	scanf("%d%d",&n,&m);
	printf("Enter element of first matrix:");

	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);

	printf("Enter the no of row and cols.of Second matrix:");
	scanf("%d%d",&p,&q);

	if(m!=p)
	printf("Matrix with enter order cant be multiplied:");
	else
	{
		printf("Enter element of Second matrix:");
		for(i=0;i<p;i++)
		for(j=0;j<q;j++)
		scanf("%d",&b[i][j]);

		for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<p;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				multiply[i][j]=sum;
				sum=0;
			}
		}
		printf("Product of entered matrix:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			printf("%d\t",multiply[i][j]);
			printf("\n");
		}
	}


}

