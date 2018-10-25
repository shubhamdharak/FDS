#include<stdio.h>
struct stud
{	int roll;
	char name[10];
	float per;
	int n;
	int counter;
}s[10];
void create(struct stud s[10]);
void add(struct stud s[10]);
void display(struct stud s[10]);
void  search(struct stud s[10]);
void edit(struct stud s[10]);
int main()
{
	int ch,r,flag,i;
	printf("\n\tchoose from the following options:");
do{	printf("\n-----------------------------------------------------------\n");
	printf("\t1]create database\n");
	printf("\t2]display the entered database\n");
	printf("\t3]search from database\n");
	printf("\t4]add database\n");
	printf("\t5]edit");
	printf("\n\t6]exit");
       printf("\n----------------------------------------------------------\n");
	printf("enter the choice:");
	scanf("%d",&ch);
	switch(ch)
	  {
		case 1:
				create(s);
				break;
		case 2:
				display(s);
				break;
		case 3:		
			      search(s);
		                 break;
		 case 4: 
		              add(s);
		              break;
		 case 5:
		            edit(s);
		            break;
	  	 default:
			printf("please enter the valid choice");
       }
}while(ch!=5);
return 0;
}	
	//create function
	void create(struct stud s[10])
   { 
	int i;
	printf("\nhow many student database to be entered:");
        scanf("%d",&s[0].n);
	for(i=1;i<=s[0].n;i++)
	{
       printf("\n----------------------------------------------------------\n");
	    printf("\nenter the roll number:");
	    scanf("%d",&s[i].roll);
	     printf("\nenter the name:");
	    scanf("%s",&s[i].name);
	     printf("\nenter the percentage:");
	    scanf("%f",&s[i].per);
       printf("\n----------------------------------------------------------\n");
	 }
	 s[0].counter=i;
	}
	//display function
	void display(struct stud s[10])
     {	
	int i;
	printf("\nROLL NO.\t\t name\t\tpercentage");
	for(i=1;i<=s[0].n;i++)
	{
	    
	    printf("\n\t%d",s[i].roll);
	     printf("\t\t:%s",s[i].name);
	     printf("\t\t%f",s[i].per);
	}
       printf("\n----------------------------------------------------------\n");
   }
		//search function
void search(struct stud s[10])
{	
               int r,i,flag=0;
		printf("\nenter the roll number:");
			scanf("%d",&r);
			for(i=1;i<=s[0].n;i++)
			{
	  		if(r==s[i].roll)
	          	{	printf("\n\trecord found");
				flag=1;
				printf("\nroll number:");
	   	 		printf("%d",s[i].roll);
	           	    printf("\nname:");
	   		    printf("%s",s[i].name);
	    	        	printf("\npercentage:");
	   		    printf("%f",s[i].per);
	   		    break;
	            }
	         }
	          if(flag==0)
			printf("\n\t!!!!!record of roll number:%d not found",r);
		}
    
       //add function
   void add(struct stud s[10])
   {
         int k,i;
        printf("\nhow many student database to be entered:");
        scanf("%d",&k);
        s[0].n=s[0].n+k;
        for(i=s[0].counter;i<=s[0].n;i++)
	{
       printf("\n----------------------------------------------------------\n");
	    printf("\nenter the roll number:");
	    scanf("%d",&s[i].roll);
	     printf("\nenter the name:");
	    scanf("%s",&s[i].name);
	     printf("\nenter the percentage:");
	    scanf("%f",&s[i].per);
       printf("\n----------------------------------------------------------\n");
	 }
 }
    //edit function
 void edit(struct stud s[10])
 {
      int e,i;
     printf("\nenter the roll number:");
			scanf("%d",&i);
			
	do{
	       printf("\n----------------------------------------------------------\n");
	       printf("\n roll number:%d",i); 
	        printf("\n1]edit name:");
	        printf("\n2]edit percentage:");
	       printf("\n3]exit");
	       printf("\n----------------------------------------------------------\n");
	printf("enter the choice:");
	scanf("%d",&e);
	
	switch(e)
	  {
		case 1:
				printf("\nenter the name:");
	                        scanf("%s",&s[i].name);
				break;
		case 2:
				printf("\nenter the percentage:");
	                       scanf("%f",&s[i].per);
				break;
               case 3:
                            main();
	  	 default:
			printf("please enter the valid choice");
       }
}while(e!=5);	
	printf("\n----------------------------------------------------------\n");
	    
}	     
	  
/*choose from the following options:           
      -----------------------------------------------------------         
      1]create database
        2]display the entered database
        3]search from database
        4]add database
        5]edit
        6]exit
----------------------------------------------------------
enter the choice:1

how many student database to be entered:3

----------------------------------------------------------

enter the roll number:1

enter the name:avi

enter the percentage:67

----------------------------------------------------------

----------------------------------------------------------

enter the roll number:2

enter the name:sai

enter the percentage:87

----------------------------------------------------------

----------------------------------------------------------

enter the roll number:3

enter the name:sagar

enter the percentage:98

----------------------------------------------------------

-----------------------------------------------------------
        1]create database
        2]display the entered database
        3]search from database
        4]add database
        5]edit
        6]exit
----------------------------------------------------------
enter the choice:2

ROLL NO.                 name           percentage
        1               :avi            67.000000
        2               :sai            87.000000
        3               :sagar          98.000000
----------------------------------------------------------

-----------------------------------------------------------
        1]create database
        2]display the entered database
        3]search from database
        4]add database
        5]edit
        6]exit
----------------------------------------------------------
enter the choice:3

enter the roll number:2

        record found
roll number:2
name:sai
percentage:87.000000
-----------------------------------------------------------
        1]create database
        2]display the entered database
        3]search from database
        4]add database
        5]edit
        6]exit
----------------------------------------------------------
enter the choice:4

how many student database to be entered:1

----------------------------------------------------------

enter the roll number:4

enter the name:sk

enter the percentage:87

----------------------------------------------------------

-----------------------------------------------------------
        1]create database
        2]display the entered database
        3]search from database
        4]add database
        5]edit
        6]exit
----------------------------------------------------------
enter the choice:3

enter the roll number:4

        record found
roll number:4
name:sk
percentage:87.000000
-----------------------------------------------------------
        1]create database
        2]display the entered database
        3]search from database
        4]add database
        5]edit
        6]exit
----------------------------------------------------------
enter the choice:2

ROLL NO.                 name           percentage
        1               :avi            67.000000
        2               :sai            87.000000
        3               :sagar          98.000000
        4               :sk             87.000000
----------------------------------------------------------

-----------------------------------------------------------
        1]create database
        2]display the entered database
        3]search from database
        4]add database
        5]edit
        6]exit
----------------------------------------------------------
enter the choice:5

enter the roll number:4

----------------------------------------------------------

 roll number:4
1]edit name:
2]edit percentage:
3]exit
----------------------------------------------------------
enter the choice:1

enter the name:akash

----------------------------------------------------------

 roll number:4
1]edit name:
2]edit percentage:
3]exit
----------------------------------------------------------
enter the choice:3

        choose from the following options:
-----------------------------------------------------------
        1]create database
        2]display the entered database
        3]search from database
        4]add database
        5]edit
        6]exit
----------------------------------------------------------
enter the choice:2

ROLL NO.                 name           percentage
        1               :avi            67.000000
        2               :sai            87.000000
        3               :sagar          98.000000
        4               :akash          87.000000
----------------------------------------------------------

-----------------------------------------------------------
        1]create database
        2]display the entered database
        3]search from database
        4]add database
        5]edit
        6]exit
----------------------------------------------------------
enter the choice:     	
*/
