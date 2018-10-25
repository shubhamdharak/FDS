#include<stdio.h>
#include<stdlib.h>

int accept(int a[])
{
    int i,n;
    printf("\nEnter No of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    return n;
}

void disp(int a[],int n)
{
    int i;
    printf("{ ");
    for(i=0;i<n;i++)
        printf("%d",a[i]);

    if(n==0)
        printf("EMPTY");
        printf(" }");
}

int uni(int a[], int b[],int c[],int n1,int n2)
{
    int i,j,n3=0, isfound=0;
    for(i=0;i<n1;i++)    // To copy all element of set a into set c.
    {
        c[n3]=a[i];
        i++;
    }
    for(j=0;j<n2;j++)
    {
        isfound=0;
        for(i=0;i<n3;i++)
        {
            if(b[j]==c[i])
            {
                isfound=1;
                break;
            }
        }
        if(isfound==0)
        {
            c[n3++]=b[j];
        }
    }
    return n3;
}


int intsect(int a[],int b[], int c[],int n1,int n2)
{
    int i,j,n3=0, isfound=0;
    for(j=0;j<n1;j++)
    {
        isfound=0;
        for(i=0;i<n1;i++)
        {
            if(b[j]==a[i])
            {
                isfound=1;
                break;
            }
        }
        if(isfound==1)
            c[n3++]=b[j];
    }
    return n3;
}

int diff(int a[],int b[],int c[],int n1,int n2)
{
    int i,j,n3=0, isfound=0;
    for(j=0;j<n2;j++)
    {
        isfound=0;
        for(i=0;i<n1;i++)
        {
            if(b[j]==a[i])
            {
                isfound=1;
                break;
            }
        }
        if(!isfound)
            c[n3++]=b[j];
    }
    return n3;
}

int main()
{
    int ch,a[10],b[10],c[10],n1=0,n2=0,n3=0,k1,k2,k3,c1[10],c2[10];
    do{
        printf("*************\n");
        printf("\n Set A= ");
        disp(a,n1);
        printf("\nSet B =");
        disp(b,n2);
        printf("*********MENU**********\n");
        printf("\n1.INPUT\n 2.UNION \n3.INTERSECT \n4.DIFFERNCE \n5.SYMM.Differnce \n6.Exit\n");
        printf("Enter Your Choice:\n");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
            printf("Enter the set A\n");
            n1=accept(a);
            printf("Enter set B\n");
            n2=accept(b);
            break;

            case 2:printf("\nAUB=");
            n3=uni(a,b,c,n1,n2);
            disp(c,n3);
            getchar();
            break;

            case 3: printf("\nA@B");
            n3=intsect(a,b,c,n1,n2);
            disp(c,n3);
            getchar();
            break;

            case 4:
            printf("\nA-B");
            n3=intsect(b,a,c,n2,n1);
            disp(c,n3);
            printf("\nB-A");
            n3=intsect(a,b,c,n1,n2);
            disp(c,n3);
            getchar();
            break;

            case 5:
            k1=diff(b,a,c1,n2,n1);
            k2=diff(a,b,c2,n1,n2);
            n3=uni(c1,c2,c,k1,k2);
            printf("\nAsdB");
            disp(c,n3);
            getchar();
            break;

            case 6:
            exit(0);
        }
        getchar();
    }while(ch!=5);
    return 0;
}

/*
exam@sai-G31T-M2:~/Documents/PL Practical$ gcc SetOperation1.c
exam@sai-G31T-M2:~/Documents/PL Practical$ ./a.out
*************

 Set A= { EMPTY }
Set B ={ EMPTY }*********MENU**********

1.INPUT
 2.UNION 
3.INTERSECT 
4.DIFFERNCE 
5.SYMM.Differnce 
6.Exit
Enter Your Choice:
1
Enter the set A

Enter No of elements:4
1
2
3
4
Enter set B

Enter No of elements:4
2
3
6
7
*************

 Set A= { 1234 }
Set B ={ 2367 }*********MENU**********

1.INPUT
 2.UNION 
3.INTERSECT 
4.DIFFERNCE 
5.SYMM.Differnce 
6.Exit
Enter Your Choice:
2

AUB={ 2367 }
*************

 Set A= { 1234 }
Set B ={ 2367 }*********MENU**********

1.INPUT
 2.UNION 
3.INTERSECT 
4.DIFFERNCE 
5.SYMM.Differnce 
6.Exit
Enter Your Choice:
3

A@B{ 23 }
*************

 Set A= { 1234 }
Set B ={ 2367 }*********MENU**********

1.INPUT
 2.UNION 
3.INTERSECT 
4.DIFFERNCE 
5.SYMM.Differnce 
6.Exit
Enter Your Choice:
4

A-B{ 23 }
B-A{ 23 }
*************

 Set A= { 1234 }
Set B ={ 2367 }*********MENU**********

1.INPUT
 2.UNION 
3.INTERSECT 
4.DIFFERNCE 
5.SYMM.Differnce 
6.Exit
Enter Your Choice:
5

AsdB{ 67 }
exam@sai-G31T-M2:~/Documents/PL Practical$
*/
