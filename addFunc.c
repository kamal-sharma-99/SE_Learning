#include<stdio.h>
int main(){
	int choice=0;
	int a=0,b=0;
	float c=0,d=0;
	int addition(){
		printf("Enter two numbers\n");
		scanf("%d%d",&a,&b);
		printf("Total is %d\n",a+b);
	}
	int sub(){
		printf("Enter two numbers\n");
		scanf("%d%d",&a,&b);
		printf("Substracion of given number is %d\n",a-b);
	}
	int mult(){
		printf("Enter two numbers\n");
		scanf("%d%d",&a,&b);
		printf("Multiplication of given number is %d\n",a*b);	
	}
	int div(){
		printf("Enter two numbers\n");
		scanf("%f%f",&c,&d);
		printf("Division of given number is %.2f\n",c/d);	
	}
	
	printf("Enter your choice of opereation\n");
	printf("Press 1 for Addition\n");
	printf("Press 2 for Substraction\n");
	printf("Press 3 for Multiplication\n");
	printf("Press 4 for Division\n");
	scanf("%d",&choice);
	
	if(choice == 1){
	printf("You choose Addition\n");
		addition();
	}	
	else if(choice == 2){
	printf("You choose Substraction\n");
		sub();
	}	
	else if(choice == 3){
	printf("You choose Mult\n");
		mult();
	}	
	else if(choice == 4){
	printf("You choose Div\n");
		div();
	}	
	else{
	printf("Try again\n");
		
	}
	
}