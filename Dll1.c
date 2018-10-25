/*
Name:Dharak Shubham
ROLL NO :106
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct DLL
{
 int rn;
 char name[10];
 struct DLL *prev,*next;
}node;

node *getnode()
{
 	node *p;
	p=(node*)malloc(sizeof(node));
 	p->next=p->prev=NULL;
 return p;
}

node *create()
{
 	node *head=NULL,*p,*last;
 	int i,n;
 	printf("\nEnter no of records: ");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		 p=getnode();
 		 printf("\nEnter [%d] record:",i+1);
 		 printf("\nRoll No & Name: ");
 		 scanf("%d%s",&p->rn,p->name);
 		 if(head==NULL)
 			  head=last=p;
 		 else
 		 {
 			  last->next=p;
 			  p->prev=last;
 			  last=p;
 		 }
 	}
 return head;
}

void display(node *head)
{
 	if(head!=NULL)
 	{
 		 printf("\nRoll No\tName: ");
 		 while(head!=NULL)
 		 {
 		  printf("\n%d\t%s",head->rn,head->name);
  		  head=head->next;
  		 }
 	}
 	else
 		 printf("\nDatabase is Empty\n");
}

void displayB(node *head)
{
	 while(head->next!=NULL)
	  head=head->next;
	 printf("\nRollNo\tName");
	 while(head!=NULL)
	 {
	  printf("\n%d\t%s",head->rn,head->name);
	  head=head->prev;
	 }
	}
	
node *insert(node *head)
{
	 node *temp,*p;
	 int x;
	 if(head==NULL)
	 {
		  printf("\nList is Empty");
	 }
	 else
	 {
		  printf("\nEnter Roll No After which rec to be inserted:" );
		  scanf("%d",&x);
		  temp=head;
		  while(temp!=NULL && temp->rn!=x)
		   temp=temp->next;
		  if(temp!=NULL)
		  {
		  	 	p=getnode();
		   		printf("\nEnter new Record(roll & Name): ");
		   		scanf("%d%s",&p->rn,p->name);
		   		if(temp->next==NULL)
		   		{
		   		 temp->next=p;
		   		 p->prev=temp;
		   		}
		   		else
		   		{
		   		 p->next=temp->next;
		   		 temp->next->prev=p;
		   		 temp->next=p;
		   		 p->prev=temp;
		   		}
	 	 }
 		 else
   			printf("\nData not found");
 	 }
 return head;
}

node *del(node *head)
{
 	node *temp;
	 int x;
	 if(head==NULL)
	 {
	  printf("\nList is Empty");
	 }
	 else
	 {
	  printf("\nEnter roll no to be deleted: ");
	  scanf("%d",&x);
	  if(head->rn==x && head->next==NULL)
	  {
	   temp=head;
	   head=head->next;
	   free(temp);
	  }
	  else if(head->rn==x)
	  {
	   temp=head;
	   head=head->next;
	   head->prev=NULL;
	   free(temp);
	  }
	  else
	  {
	   temp=head;
	   while(temp!=NULL && temp->rn!=x)
	    temp=temp->next;
	
	   if(temp!=NULL)
	   {
	    if(temp->next==NULL)
	    {
	     temp->prev->next=NULL;
	     free(temp);
	    }
	    else
	    {
	     temp->prev->next=temp->next;
	     temp->next->prev=temp->prev;
	     free(temp);
	    }
	
	   }
	   else
	    printf("\nData not found");
	  }
 }
 return head;
}

void modify(node *head)
{
	 node *temp=head;
 	int x;
	 if(head==NULL)
 	{
  		printf("\nList is empty");
 	}
 	else
 	{
  		printf("\nEnter roll no to be modify: ");
  		scanf("%d",&x);
  	while(temp!=NULL && temp->rn!=x)
   	temp=temp->next;
  	if(temp!=NULL)
  	{
   		printf("\nenter new data: ");
   		scanf("%d%s",&temp->rn,temp->name);
  	}
  	else
   		printf("\nRec not found");
 	}
}

int main()
{
 	int ch,pos;
 	node *head=NULL,*p;
 	while(1)
 	{
  		system("clear");
  		display(head);
  		printf("\n\n*******MENU************");
  		printf("\n1.Create\t2.Display\n3.Insert\t4.Delete");
  		printf("\n5.Display Backword\t6.Modify\t7.Exit");
  		printf("\n\n***********************");
 	 	printf("\nEnter ur choice: ");
  		scanf("%d",&ch);
  		switch(ch)
  			{	
   			case 1:
    			head=create();
    			break;
   			case 2:
    				display(head);
    				getchar();
   					break;
   			case 3:
    				head=insert(head);
    				printf("\n\nAfter Insertion: ");
    				display(head);
    				getchar();
    				break;
   		   case 4:
    				head=del(head);
    				printf("\n\nAfter Deletion: ");
    				display(head);
   					getchar();
    				break;
   		  case 5:
    				displayB(head);
    				getchar();
   			 		break;
  		  case 6:
    				modify(head);
    				display(head);
    				getchar();
    				break;
 		  case 7:
    			exit(0);
  			}
  		getchar();
 	}//while close.
 return 0;
}
/*
	OUTPUT
	exam@sai-desktop:~$ cd Documents/
exam@sai-desktop:~/Documents$ gcc Dll1.c
exam@sai-desktop:~/Documents$ ./a.out


Database is Empty


*******MENU************
1.Create	2.Display
3.Insert	4.Delete
5.Display Backword	6.Modify	7.Exit

***********************
Enter ur choice: 1

Enter no of records: 3

Enter [1] record:
Roll No & Name: 1 Shubham 

Enter [2] record:
Roll No & Name: 2 Aniket

Enter [3] record:
Roll No & Name: 3 Anil  



Roll No	Name: 
1	Shubham
2	Aniket
3	Anil

*******MENU************
1.Create	2.Display
3.Insert	4.Delete
5.Display Backword	6.Modify	7.Exit

***********************
Enter ur choice: 2

Roll No	Name: 
1	Shubham
2	Aniket
3	Anil


Roll No	Name: 
1	Shubham
2	Aniket
3	Anil

*******MENU************
1.Create	2.Display
3.Insert	4.Delete
5.Display Backword	6.Modify	7.Exit

***********************
Enter ur choice: 3

Enter Roll No After which rec to be inserted:3

Enter new Record(roll & Name): 4 Rahul


After Insertion: 
Roll No	Name: 
1	Shubham
2	Aniket
3	Anil
4	Rahul


Roll No	Name: 
1	Shubham
2	Aniket
3	Anil
4	Rahul

*******MENU************
1.Create	2.Display
3.Insert	4.Delete
5.Display Backword	6.Modify	7.Exit

***********************
Enter ur choice: 4

Enter roll no to be deleted: 4


After Deletion: 
Roll No	Name: 
1	Shubham
2	Aniket
3	Anil


Roll No	Name: 
1	Shubham
2	Aniket
3	Anil

*******MENU************
1.Create	2.Display
3.Insert	4.Delete
5.Display Backword	6.Modify	7.Exit

***********************
Enter ur choice: 5

RollNo	Name
3	Anil
2	Aniket
1	Shubham







Roll No	Name: 
1	Shubham
2	Aniket
3	Anil

*******MENU************
1.Create	2.Display
3.Insert	4.Delete
5.Display Backword	6.Modify	7.Exit

***********************
Enter ur choice: 6

Enter roll no to be modify: 3

enter new data: 33 Rahul               

Roll No	Name: 
1	Shubham
2	Aniket
33	Rahul



Roll No	Name: 
1	Shubham
2	Aniket
33	Rahul

*******MENU************
1.Create	2.Display
3.Insert	4.Delete
5.Display Backword	6.Modify	7.Exit

***********************
Enter ur choice: 7
exam@sai-desktop:~/Documents$
*/

