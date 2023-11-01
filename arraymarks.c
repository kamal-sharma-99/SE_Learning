#include<stdio.h>
int main(){
	char name[10];
	int marks[100];
	float total=0;
	float per=0;
	
	printf("Enter your name\n");
	gets(name);
	fflush(stdin);
	
	for(int i=1;i<=5;i++){
		printf("Enter your marks\n");
		scanf("%d",&marks[i]);
		total = total + marks[i];

}
	
	
	printf("Marks of %s is %.2f\n",name,total);
	
	per = total/5;
	printf("Percentage of %s is %.2f\n",name,per);
} 
 