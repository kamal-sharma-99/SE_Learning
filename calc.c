#include<stdio.h>
int main(){
	int a=0,b=0;
	char c;
	printf("Calculate here\n");
	scanf("%d %c %d",&a,&c,&b);
	
	if(c== '+'){
		printf("Addition is %d",a+b);
	}
	else if(c== '-'){
		printf("substraction is %d",a-b);
	}
	else if(c== '*'){
		printf("Mutiplication is %d",a*b);
	}
	else if(c== '/'){
		
		printf("Division is %.2f",a/b);
	}
	else{
		printf("Try again");
		
	}
	
}