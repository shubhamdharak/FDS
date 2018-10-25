#include<stdio.h>
typedef struct sll
{
	int data;
	struct sll *next;
}node;

node *temp,*temp2,*temp3,*start,*q,*newnode;
node* create();
node* getnode();
void display();
void addbegin(int info);
void addafter(int info);
void  search(int info);
int main()
{
	int ch,info;
	do
	{
		printf("\n-------------MENU-------------");
		printf("\n1.create");
		printf("\n2.display");
		printf("\n3.Addbegin");
		printf("\n4.AddAfter");
		printf("\n5.Search");
		printf("\n------------------------------");
		printf("\nEnter the choice:");
		scanf("%d",&ch);
	
		switch(ch)// accept data from user
		{
			case 1:
				start=create();
				break;
			case 2:
					display();
				break;
			case 3:	
					printf("\nEnter the new data:");
					scanf("%d",&info);
					addbegin(info);
					break;
			case 4:
					printf("\nEnter the new data:");
					scanf("%d",&info);
					addafter(info);
					break;

			case 5: 
					printf("\n enter the no you want to search:");
					scanf("%d",&info);
					search(info);
					break;
		}
	}while(ch!=5);
}	

node* create()
{
	int val,flag=1;
	int choice;

	do	
	{
		printf("\n Enter data:");
		scanf("%d",&val);
		newnode=getnode();
		newnode->data=val;
		
		if(flag==1)
		{
			start=newnode;
			temp=start;
			flag=0;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you wamt to add more node(0/1):\n");//countinue
		scanf("%d",&choice);
		
	}while(choice==1);
return start;
}

node* getnode()// node creation fuction
{

	node*temp;//local dreclartion lossing identify after executuion a fuction execution
	
	temp=(node*)malloc(sizeof(node));
	temp->next=NULL;
	return temp;	
}


void display()// fuction to display add node
{
	temp=start;
	while(temp!=NULL)
	{
		printf("%d:::",temp->data);
		temp=temp->next;	
	}
		printf("NULL\n");
}


void addbegin(int info)
{
	temp=(node*)malloc(sizeof(node));
	temp->data=info;
	temp->next=start;
	start=temp;
}

void addafter(int info)
{
	int i,pos;
	
	temp=(node*)malloc(sizeof(node));
	temp->data=info;
	temp->next=NULL;
	q=start;
	printf("\nEnter position after which,data to be added:");
	scanf("%d",&pos);
		for(i=0;i<pos;i++)
			{
				q=q->next;
			}	
	temp->next=q->next;
	q->next=temp;
}

void search(int info)
{

	int i=0,flag=0;
	temp=start;
	while(temp!=NULL)
	{
		if(temp->data==info)
		{
		flag=1;
		break;
		}
		temp=temp->next;
		i++;
	}
	if(flag==1)
	{
			printf("\nElement  %d id found at position %d.\n",info,i);
	}
	else
	{
		printf("\n Element is not found!!");
	}
}


/*exam@sai-desktop:~$ ./a.out

-------------MENU-------------
1.create
2.display
3.Addbegin
4.AddAfter
5.Search
------------------------------
Enter the choice:1

 Enter data:10
Do you wamt to add more node(0/1):
1

 Enter data:11
Do you wamt to add more node(0/1):
1

 Enter data:12
Do you wamt to add more node(0/1):
1

 Enter data:13
Do you wamt to add more node(0/1):
1

 Enter data:14
Do you wamt to add more node(0/1):
1

 Enter data:15
Do you wamt to add more node(0/1):
0

-------------MENU-------------
1.create
2.display
3.Addbegin
4.AddAfter
5.Search
------------------------------
Enter the choice:2
10:::11:::12:::13:::14:::15:::NULL

-------------MENU-------------
1.create
2.display
3.Addbegin
4.AddAfter
5.Search
------------------------------
Enter the choice:3

Enter the new data:9

-------------MENU-------------
1.create
2.display
3.Addbegin
4.AddAfter
5.Search
------------------------------
Enter the choice:4

Enter the new data:16

Enter position after which,data to be added:5

-------------MENU-------------
1.create
2.display
3.Addbegin
4.AddAfter
5.Search
------------------------------
Enter the choice:5

 enter the no you want to search:13

Element  13 id found at position 4.
exam@sai-desktop:~$ */

