//if else
#include<stdio.h>
int main(){
	
int marks = 0;
int loop=0;
while(loop<=3){
	
	printf("enter your marks : \n");
scanf("%d",&marks);

if(marks>=0 && marks<=100){
	
if(marks >= 0 && marks <= 35)
{
	printf("Fail\n");
}
else if(marks >= 36 && marks <= 50)
{
	printf("third div\n");
}
else if(marks > 51 && marks <= 80)
{
	printf("second\n");
}
else if(marks >= 81)
{
	printf("7 crore\n");
}
}
else{
	printf("Enter a valid value\n");
}
	loop++;	
}

}