/*exp 06*/
#include<stdio.h>
typedef struct
{
	int roll;
	char name[25];
	int m1,m2,m3;
}STD;
STD s;
void display(FILE *);
int search(FILE *,int);
void main()
{
	int i,n,roll_key,opn;
	FILE *fp;
	printf("\nHOW MANY RECORDS YOU WANT?\n");
	scanf("%d",&n);
	fp=fopen("stud.txt","w");
	for(i=0;i<n;i++)
	{
		printf("\nENTER THE INFORMATION FOR STUDENT\n");
		printf("\nENTER ROLL NO, NAME,M1,M2,M3\n");
		scanf("%d%s%d%d%d",&s.roll,s.name,&s.m1,&s.m2,&s.m3);
		fwrite(&s,sizeof(s),1,fp);
	}
	fclose(fp);
	fp=fopen("stud.txt","r");
	do
	{
		printf("\n1. display\n2. search\n3. exit\n\nENTER OPTION");
		scanf("%d",&opn);
		switch(opn)
		{
			case 1:
				printf("\nSTUDENTS RECORD IN THE FILE\n");
				printf("--------------------------------\n");	
				display(fp);
				printf("--------------------------------\n");
				break;
			case 2:
				printf("\nENTER THE ROLL NO OF STUDENT");
				scanf("%d",&roll_key);
				if(search(fp,roll_key))
				{
				printf("\nRECORD FOUND IN FILE\n");
				printf("--------------------------------\n");	
			printf("\n%d\t%s\t%d\t%d\t%d\n",s.roll,s.name,s.m1,s.m2,s.m3);
				printf("--------------------------------\n");	
				}	
				else
				printf("\nRECORD WITH ROLL %d NOT FOUND\n",roll_key);
				break;
			case 3:
				printf("\n EXIT!!PRESS A KEY....");
				break;
			default:
				printf("INVALID OPTION!!! TRY AGAIN!!!\n");
				break;
		}
	}
	while(opn!=3);
	fclose(fp);
}
void display(FILE *fp)
{
	rewind(fp);
	while(fread(&s,sizeof(s),1,fp))
	printf("%d\t%s\t%d\t%d\t%d\n",s.roll,s.name,s.m1,s.m2,s.m3);
}
int search(FILE *fp, int roll_key)
{
	rewind(fp);
	while(fread(&s,sizeof(s),1,fp))
	if(s.roll==roll_key)return 1;
	return 0;
}
/***************************OUTPUT*****************************
exam@sai:~$ gedit file.c
exam@sai:~$ gcc file.c
exam@sai:~$ ./a.out

HOW MANY RECORDS YOU WANT?
5

ENTER THE INFORMATION FOR STUDENT

ENTER ROLL NO, NAME,M1,M2,M3
1
prasad
25
26
27

ENTER THE INFORMATION FOR STUDENT

ENTER ROLL NO, NAME,M1,M2,M3
2
nitin
32
23
35

ENTER THE INFORMATION FOR STUDENT

ENTER ROLL NO, NAME,M1,M2,M3
3
shubham
42
26
12

ENTER THE INFORMATION FOR STUDENT

ENTER ROLL NO, NAME,M1,M2,M3
4
aniket
52
23
56

ENTER THE INFORMATION FOR STUDENT

ENTER ROLL NO, NAME,M1,M2,M3
5
anup
42
42
32

1. display
2. search
3. exit

ENTER OPTION1

STUDENTS RECORD IN THE FILE
--------------------------------
1	prasad	25	26	27
2	nitin	32	23	35
3	shubham	42	26	12
4	aniket	52	23	56
5	anup	42	42	32
--------------------------------

1. display
2. search
3. exit

ENTER OPTION
*/
				
