//string using strcmp

#include<stdio.h>
#include<string.h>
main()
{
	char fname[25],cname[25];
	int x;
	printf("Enter First name:: ");
	scanf("%s",&fname);
	
	printf("Enter last name:: ");
	scanf("%s",&cname);
	x=strcmp(fname,cname);
	if(x==0)
	{
			printf("Strings are same");
	}
	else
	{
			printf("Strings are not same");
	}


}
