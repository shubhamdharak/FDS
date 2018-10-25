#include<stdio.h>
void main()
{
	char a[10],b[10],c[20];
	int i,j,ct,p;
	printf("1. length of the string\n2. reverse the string\n3. copy the string\n4. add two string\n5. palindrome\n");
	printf("\n enter your choise");
	scanf("%d",&p);
	switch(p)
	{  
		 case 1:{      
				 char a[10];
				int i,ct;
                               printf("enter your name=");
				scanf("%s",a);
				i=0;
				ct=0;
				while(a[i]!='\0')
				{
					i++;
					ct++;			
				}
				printf("\nlength of the string=%d\n",ct);	
			}break;
		case 2: {      
				 char a[10];
				int i,ct;
                               printf("enter your name=");
				scanf("%s",a);
				i=0;
				ct=1;
				while(a[i]!='\0')
				{
					i++;
					ct++;			
				}
				for(i=ct;i>=0;i--)
				{
					printf("%c\n",a[i]);
				}
			}break;
		case 3: {
				char a[10],b[10];
				int i,j,ct;
                               printf("enter your name=");
				scanf("%s",a);
				i=0;
				while(a[i]!='\0')
				{
					b[i]=a[i];
					i++;			
				}
				for(i=0;i<b[i];i++)
				{
					printf("%c",b[i]);
				}
			}break;
		case 4:  {
				char a[10],b[10],c[20];
				int i,ct;
                                printf("enter your first name=");
				scanf("%s",a);
			 	printf("enter your last name=");
				scanf("%s",b);
				i=0;
				while(a[i]!='\0')
				{
					c[i]=a[i];
					i++;		
				}
				c[i]=' ';i++;j=0;
				c[i]=c[i]+b[j];
				printf("%s\n",c);
	
			}break;
	  	case 5: {      
				 char a[10];
				int i,ct,flag;
                               printf("enter your name=");
				scanf("%s",a);
				i=0;
				ct=1;
				while(a[i]!='\0')
				{
					i++;
					ct++;			
				}
                               ct--;
				flag=0;
				i=0;
				while(a[i]!='\0')
				{
					if(a[i]==a[ct-1])
					{
						i++;
						ct--;
					}
					else
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					printf("string is palindrome\n");
				}
				else
				{
					printf("string is not palindrome\n");
				}	 
			}break;
          }
}
