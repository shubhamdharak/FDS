
#include<stdio.h>
#include<math.h>
#define MAX 17
void init(int p[]);
void read(int p[]);
void print(int p[]);
void add(int p1[],int p2[],int p3[]);
void multiply(int p1[],int p2[],int p3[]);


void main()
{
	int p1[MAX],p2[MAX],p3[MAX];
	int option;
	do
	{
		printf("\n********************");
		printf("\n1:Create 1St polynomial");
		printf("\n2:Create 2nd Polynomial");
		printf("\n3.Add_polynomial");
		printf("\n4.Multiply_polynomial");
		printf("\n5.Quit");
		printf("\n**********************");
		printf("\nEnter your choice::");
		scanf("%d",&option);
		switch(option)
		{
			case 1: read(p1);break;
			case 2: read(p2);break;
                        case 3:add(p1,p2,p3);
                                  printf("\n1'st polynomial-> ");
                                       print(p1);
                                  printf("\n2'nd polynomial-> ");
                                       print(p2);
                                  printf("\nSum =");
                                       print(p3);
                                break;
                        case 4: multiply(p1,p2,p3);
                                  printf("\n1'st polynomial-> ");
                                        print(p1);
                                  printf("\n2'nd polynomial-> ");
                                        print(p2);
                                  printf("\n Product = ");
                                        print(p3);
                                        break;
                                
					
		}	
	}while(option!=5);
}
void read(int p[])
{
         int n,i,power,coeff;
            init(p);
        printf("\nEnter the no Of terms:");
        scanf("%d",&n);
        /*Read n terms*/
        for(i=0;i<n;i++)
        {
                printf("Enter the terms(power coeff.):");
                scanf("%d%d",&power,&coeff);
                p[power]=coeff;
        }
}

void print(int p[])
{
        int i;
        for(i=0;i<MAX;i++)
                if(p[i]!=0)
        printf("%dX^%d ",p[i],i);

} 
void add(int p1[],int p2[],int p3[])
{
        int i;
        for(i=0;i<MAX;i++)
        p3[i]=p1[i]+p2[i];
}

void multiply(int p1[],int p2[],int p3[])
{
        int i,j;
        init(p3);
        for(i=0;i<MAX;i++)
        for(j=0;j<MAX;j++)
                p3[i+j]=p3[i+j]+p1[i]*p2[j];
}

void init(int p[])
{
        int i;
        for(i=0;i<MAX;i++)
        p[i]=0;
}

/*  OUTPUT
    exam@sai:~/Documents$ gcc Cll.c
exam@sai:~/Documents$ ./a.out

********************
1:Create 1St polynomial
2:Create 2nd Polynomial
3.Add_polynomial
4.Multiply_polynomial
5.Quit**********************
Enter your choice::1

Enter the no Of terms:3
Enter the terms(power coeff.):3 4
Enter the terms(power coeff.):2 5
Enter the terms(power coeff.):1 3

********************
1:Create 1St polynomial
2:Create 2nd Polynomial
3.Add_polynomial
4.Multiply_polynomial
5.Quit**********************
Enter your choice::2

Enter the no Of terms:3
Enter the terms(power coeff.):3 -1
Enter the terms(power coeff.):2 6
Enter the terms(power coeff.):1 2

********************
1:Create 1St polynomial
2:Create 2nd Polynomial
3.Add_polynomial
4.Multiply_polynomial
5.Quit**********************
Enter your choice::3

1'st polynomial-> 3X^1 5X^2 4X^3 
2'nd polynomial-> 2X^1 6X^2 -1X^3 
Sum =5X^1 11X^2 3X^3 
********************
1:Create 1St polynomial
2:Create 2nd Polynomial
3.Add_polynomial
4.Multiply_polynomial
5.Quit**********************
Enter your choice::4

1'st polynomial-> 3X^1 5X^2 4X^3 
2'nd polynomial-> 2X^1 6X^2 -1X^3 
 Product = 6X^2 28X^3 35X^4 19X^5 -4X^6 
********************
1:Create 1St polynomial
2:Create 2nd Polynomial
3.Add_polynomial
4.Multiply_polynomial
5.Quit**********************
Enter your choice::5
exam@sai:~/Documents$ ^C
exam@sai:~/Documents$ clear


*/
