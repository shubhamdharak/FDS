#include<stdio.h>
#define max 30
int set1[max],set2[max],set3[max];
int n,i,x,m,set[10];
void create(int set[]);
void print(int set[]);
void Union(int set[]);
 int member(int set3,int set[]);
int main()
{ 
	
        set1[0]=set2[0]=set3[0]=0;
        create(set[10]);
        print(set[10]);
        Union(set[10]);
        
 }void create()
{
	set1[0]=0;
	printf("\n\t enter the number of elements in set1:");
	scanf("%d",&n);
        printf("\n\tenter the element in set1:");
 	for(i=1;i<=n;i++)
	scanf("%d",&set1[i]);
	printf("\n");
	set2[0]=0;
	printf("\n\t enter the number of elements in set2:");
	scanf("%d",&m);
        printf("\n\tenter the element in set2:");
 	for(i=1;i<=m;i++)
	scanf("%d",&set2[i]);
	printf("\n");
}
        void print()
      {	
       printf("\nthe element in set1:");
 	for(i=1;i<=n;i++)
	printf("\t%d\t",set1[i]);
	printf("\n");
	printf("\nthe element in set2:");
 	for(i=1;i<=m;i++)
	printf("\t%d\t",set2[i]);
	printf("\n");
	}
	void Union(int set[])
      {	
	
	for(i=1;i<=n;i++)
	set3[i]=set1[i];
	for(i=1;i<=m;i++)
	if(!member(set3,set2[i]))
	set3[++set3[0]]=set2[i];
        }
 int member(int set3,int set[])
     {	
	for(i=1;i<=m;i++)
	if(x==set2[i])
	return (1);
	return(0);
}