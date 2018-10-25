/*	Progam for String Operation
Name:nitin ghaywat
SE(IT). RollNo:25
*/
#include<stdio.h>
void len(char s1[10]);
void rev(char s1[10]);
void comp(char [],char []);
void concate(char [],char []);
void comp(char [],char []);
void paln(char []);
void substr(char [], char []);
void copy(char []);
int main()
{
	char s1[30],s2[30];
	int ch,i,j,ch1;

	do
	{	printf("\n\n************String Operation**************************\n");
		printf("\nSelect one:\n");
		printf("\n1.String lenght:\n");
		printf("\n2.String Reverse:\n");
		printf("\n3.String Compare:\n");
		printf("\n4.String Concate:\n");
		printf("\n5.String Palindrome:\n");
		printf("\n6.String substring:\n");
		printf("\n7.String Copy:\n");
		printf("\n8.Quit\n");
		printf("***************************************\n");

		printf("\nEnter Your Choice:\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:printf("\n Length\n");
				printf("Enter the string:");
				scanf("%s",s1);
				len(s1);
				break;

			case 2:
				printf("Reverse\n");
				printf("Enter the string:");
				scanf("%s",s1);
				rev(s1);
				break;

			case 3:
				printf("Compare\n");
				printf("Enter the first string:");
				scanf("%s",s1);
				printf("Enter the second string:");
				scanf("%s",s2);
				comp(s1,s2);
				break;
			case 4:
				printf("Concate\n");
				printf("Enter the first string:");
				scanf("%s",s1);
				printf("Enter the second string:");
				scanf("%s",s2);
				concate(s1,s2);
				break;
			case 5:
				printf("\nPalindrome\n");
				printf("\nEnter the string:");
				scanf("%s",s1);
				paln(s1);
				break;

			case 6:
				printf("\nSubstracting\n");
				printf("\nEnter the first string:");
				scanf("%s",s1);
				printf("\nEnter the second string:");
				scanf("%s",s2);
				substr(s1,s2);
				break;

			case 7:
				printf("\nCopy\n");
				printf("Enter the string:");
				scanf("%s",s1);
				copy(s1);
				break;
			case 8:
				break;
			default:
				printf("\n Please Enter valid choice:");
		}
	}while(ch!=8);
}

// String Length Function Define
 void len(char s1[10])
	{
		int i=0;
		while(s1[i]!='\0')
			i++;
		printf("Length:\n%d",i);
	}

// String Reverse function define
 void rev(char s1[10])
{
	 int i=0,j=0;
	char s2[10];
	while(s1[i]!='\0')
		i++;
	i--;
	while(s1[j]!='\0')
	{
		s2[j]=s1[i];
		i--;
		j++;
	}
	s2[j]='\0';
	printf("Reverse=%s",s2);
}

// String compare
void comp(char s1[10],char s2[10])
{
	int i=0,j=0,flag=0,l=0;
	while(s1[i]!='\0')
	i++;
	while(s2[j]!='\0')
	j++;

	if(i==j)
	{
		while(s1[i]!='\0' && s2[i]!='\0')
		{
			flag=0;
			if(s1[l]!=s2[l])
			{
				printf("String is not Equal.");
				flag=1;
				break;
			}
		}l++;
	}
	else
	{
		printf("String is not equal.");
		flag=1;
	}
	if(flag==0)
	{
		printf("String are Equal.");
	}
}

// String concate
void concate(char s1[30], char s2[30])
{
	int i=0,j=0;
	while(s1[i]!='\0')
	i++;
	i--;

	while(s2[j]!='\0')
	{	s1[i]=s2[j];
		i++;
		j++;
	}
	s1[i]='\0';
	printf("Concatinated String is ::%s",s1);

}
// Paln
void paln(char s1[30])
{
	int i=0,j=0,flag=0;
	char s2[30];
	while(s1[i]!='\0')
	i++;
	i--;
	while(s1[j]!='\0')
	{
		s2[j]=s1[i];
		i--;
		j++;
	}
	s2[j]='\0';
	i=j=0;
	while(s1[i]!='\0' && s2[i]!='\0')
	{
		if(s1[i]!=s2[j
			])
			{
				printf("String is not Equal.");
				flag=1;
				break;
			}
			i++;
			j++;
	}
	if(flag==0)
	printf("String is Palindrom");
}

// Substract
void substr(char s1[30],char s2[20])
{
	int i=0,j=0,flag=0;
	while(s1[i]!='\0')
	{
		j=0;
		while(s2[j]!='\0')
		{
			if(s1[i]==s2[j])
			{
				i++;
				j++;
			}
			else
			{
				break;
			}
		}
		if(s2[j]=='\0')
		{
			flag=1;
			break;
		}
		else
		{
			i++;
		}
	}

	if(flag==1)
	{
		printf("String are SubString.");
	}
	else
	{
		printf("String are not substring.");
	}
}


// String copy
void copy(char s1[30])
{
	int i,j;
	char s2[30];
	i=j=0;
	while(s1[j]!='\0')
	{
		s2[j]=s1[i];
		i++;
		j++;
	}
	s2[j]='\0';
	printf("Copied String is: %s",s2);
}
/*exam@sai-G31T-M2:~/Documents$ cd PL\ Practical/
exam@sai-G31T-M2:~/Documents/PL Practical$ gcc String.c
exam@sai-G31T-M2:~/Documents/PL Practical$ ./a.out


************String Operation**************************

Select one:

1.String lenght:

2.String Reverse:

3.String Compare:

4.String Concate:

5.String Palindrome:

6.String substring:

7.String Copy:

8.Quit
***************************************

Enter Your Choice:
1

 Length
Enter the string:SANJIVANI
Length:
9

************String Operation**************************

Select one:

1.String lenght:

2.String Reverse:

3.String Compare:

4.String Concate:

5.String Palindrome:

6.String substring:

7.String Copy:

8.Quit
***************************************

Enter Your Choice:
2
Reverse
Enter the string:SANJIVANI
Reverse=INAVIJNAS

************String Operation**************************

Select one:

1.String lenght:

2.String Reverse:

3.String Compare:

4.String Concate:

5.String Palindrome:

6.String substring:

7.String Copy:

8.Quit
***************************************

Enter Your Choice:
3
Compare
Enter the first string:SANJIVANI
Enter the second string:SANJIVANI
String are Equal.

************String Operation**************************

Select one:

1.String lenght:

2.String Reverse:

3.String Compare:

4.String Concate:

5.String Palindrome:

6.String substring:

7.String Copy:

8.Quit
***************************************

Enter Your Choice:
4
Concate
Enter the first string:SANJIVANI
Enter the second string:COLLEGE
Concatinated String is ::SANJIVANCOLLEGE

************String Operation**************************

Select one:

1.String lenght:

2.String Reverse:

3.String Compare:

4.String Concate:

5.String Palindrome:

6.String substring:

7.String Copy:

8.Quit
***************************************

Enter Your Choice:
5

Palindrome

Enter the string:MAM
String is Palindrom

************String Operation**************************

Select one:

1.String lenght:

2.String Reverse:

3.String Compare:

4.String Concate:

5.String Palindrome:

6.String substring:

7.String Copy:

8.Quit
***************************************

Enter Your Choice:
6

Substracting

Enter the first string:SANJIVANI

Enter the second string:SANJIV
String are SubString.

************String Operation**************************

Select one:

1.String lenght:

2.String Reverse:

3.String Compare:

4.String Concate:

5.String Palindrome:

6.String substring:

7.String Copy:

8.Quit
***************************************

Enter Your Choice:
7

Copy
Enter the string:SANJIVANI
Copied String is: SANJIVANI

************String Operation**************************

Select one:

1.String lenght:

2.String Reverse:

3.String Compare:

4.String Concate:

5.String Palindrome:

6.String substring:

7.String Copy:

8.Quit
***************************************

Enter Your Choice:
8
exam@sai-G31T-M2:~/Documents/PL Practical$ 
*/
