// Program for DataBase 
//name:nitin ghaywat
//roll no 25
#include<stdio.h>
#include<stdlib.h>

typedef struct stud
{
 int roll;
 char name[20];
 float avg;
}stud;

int accept(stud a[])
{
 int n,i;
 printf("\nenter no of Records: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter roll,name & avg of [%d]: ",i);
  scanf("%d%s%f",&a[i].roll,a[i].name,&a[i].avg);
 }
 return n;
}

void disp(stud a[],int n)
{
 int i;
 printf("\n\n\nRoll\tName\tAvg: ");
 printf("\n-----------------------");
 for(i=0;i<n;i++)
  printf("\n%d\t%s\t%.2f ",a[i].roll,a[i].name,a[i].avg);
   printf("\n-----------------------\n");
}

int search(stud a[],int n,int x)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(a[i].roll==x)
   return i;
 }
 return -1;
}


int del(stud a[],int n)
{
 int x,j,pos;
 printf("\nEnter Roll no to delet: ");
 scanf("%d",&x);

  pos=search(a,n,x);

  if(pos!=-1)
 {
  for(j=pos;j<n;j++)
  {
   a[j]=a[j+1];
  }
  printf("\nRecord deleted succesfully");
  n--;
 }
 else
  printf("\nRecord not present");

   return n;
}

int ins(stud a[],int n)
{
 int pos,j;
 stud x;
 printf("\nEnter pos: ");
 scanf("%d",&pos);
 if(pos<=n)
 {
  printf("enter roll,name & avg :");
  scanf("%d%s%f",&x.roll,x.name,&x.avg);
  for(j=n;j>pos;j--)
  {
   a[j]=a[j-1];
  }
  a[pos]=x;
  printf("\nelement inserted succesfully");
  n++;
 }
 else
  printf("\ninvalid pos");

   return n;
}


void modify(stud a[],int n)
{
 int pos,x;
 stud a1;
 printf("\nenter no to modify: ");
 scanf("%d",&x);

  pos=search(a,n,x);

  if(pos!=-1)
 {
  printf("\nEnter new Data: ");
  scanf("%d%s%f",&a1.roll,a1.name,&a1.avg);
  a[pos]=a1;
 }
 else
  printf("\nRecord not found:");
}

int main()
{
 int ch,n=0,i,x;
 stud a[20];
 while(1)
 {
  system("clear");
  //clrscr();
  disp(a,n);
  printf("\n************MENU************");
  printf("\n1.accept\n2.ins\n3.del\n4.search\n5.modify\n6.exit");
  printf("\n****************************");
  printf("\nEnter ur Choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: n=accept(a);
    getchar();
    break;
   case 2: n=ins(a,n);
    getchar();
    break;
   case 3: n=del(a,n);
    getchar();
    break;
   case 4:
    printf("\nenter rollno to search: ");
    scanf("%d",&x);
    i=search(a,n,x);
    if(i!=-1)
    {
     printf("\nRoll\tName\tAvg: ");
     printf("\n%d\t%s\t%f ",a[i].roll,a[i].name,a[i].avg);     }
    else
     printf("\nRecord not found");
    getchar();
    break;
   case 5:
    modify(a,n);
    getchar();
    break;
   case 6:exit(0);
  }
  getchar();
 }
     return 0;
}


/*exam123@sai-desktop:~$ gcc struct.c
exam123@sai-desktop:~$ ./a.out




Roll	Name	Avg: 
-----------------------
-----------------------

************MENU************
1.accept
2.ins
3.del
4.search
5.modify
6.exit
****************************
Enter ur Choice: 1

enter no of Records: 2
enter roll,name & avg of [0]: 25 
nitin
72
enter roll,name & avg of [1]: 24
rushikesh
76


Roll	Name	Avg: 
-----------------------
25	nitin	72.00 
24	rushikesh	76.00 
-----------------------

************MENU************
1.accept
2.ins
3.del
4.search
5.modify
6.exit
****************************
Enter ur Choice: 2

Enter pos: 2
enter roll,name & avg :35 
prasad
64

element inserted succesfully




Roll	Name	Avg: 
-----------------------
25	nitin	72.00 
24	rushikesh	76.00 
35	prasad	64.00 
-----------------------

************MENU************
1.accept
2.ins
3.del
4.search
5.modify
6.exit
****************************
Enter ur Choice: 3

Enter Roll no to delet: 35

Record deleted succesfully




Roll	Name	Avg: 
-----------------------
25	nitin	72.00 
24	rushikesh	76.00 
-----------------------

************MENU************
1.accept
2.ins
3.del
4.search
5.modify
6.exit
****************************
Enter ur Choice: 4

enter rollno to search: 24

Roll	Name	Avg: 
24	rushikesh	76.000000 


Roll	Name	Avg: 
-----------------------
25	nitin	72.00 
24	rushikesh	76.00 
-----------------------

************MENU************
1.accept
2.ins
3.del
4.search
5.modify
6.exit
****************************
Enter ur Choice: 5

enter no to modify: 25

Enter new Data: 25
nitin
74



Roll	Name	Avg: 
-----------------------
25	nitin	74.00 
24	rushikesh	76.00 
-----------------------

************MENU************
1.accept
2.ins
3.del
4.search
5.modify
6.exit
****************************
Enter ur Choice: 5

enter no to modify:*/
 





