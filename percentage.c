#include<stdio.h>
int main (){
	int marks;
	float per;
	float t_marks = 0;
	printf("Enter your english marks\n");
	scanf("%d",&marks);
	t_marks = marks;
	printf("Enter your science marks\n");
	scanf("%d",&marks);
	t_marks = t_marks + marks;
	printf("Enter your history marks\n");
	scanf("%d",&marks);
	t_marks = t_marks + marks;
	printf("Enter your maths marks\n");
	scanf("%d",&marks);
	t_marks = t_marks + marks;
	printf("Enter your hindi marks\n");
	scanf("%d",&marks);
	t_marks = t_marks + marks;
	
	printf("Total  marks are : %f\n",t_marks);
	
	per = (t_marks/5);
//	per = (t_marks*100)/500;
	printf("Percentage are : %f\n",per);
	
	
}