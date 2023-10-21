#include<stdio.h>
void main()
{
		char name[50];
		int age, marks;
		char city[50];
//		int marks;
		
		printf("enter your name\n");
//		scanf("%s",&name);
		gets(name);
		printf("enter your age\n");
		scanf("%d",&age);
		printf("enter your city\n");
//		scanf("%s",&city);
		gets(city);
		printf("enter your marks\n");
		scanf("%d",&marks);
		
		printf("you name is : %s \n age is : %d \n city is : %s \n your marks are %d",name,age,city,marks);
}