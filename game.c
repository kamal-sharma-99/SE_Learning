#include<stdio.h>

int main (){
	char choice;
		printf("\t\t\t\t\tWelcome to our famous vegetarian Restaurant\n");
	printf("Are you hungry? type Y for yes and N for no\n");
	scanf("%c",&choice);
	fflush(stdin);
	
	
	if(choice == 'y' || choice == 'Y'){
		printf("What kind of food you are looking for?\n\n");
		
		printf("Type N for North Indian\n");	
		printf("Type S for South Indian\n");	
		printf("Type G for Gujrati\n");	
		
		printf("Type C for Chinese\n");	
		printf("Choose your desired category\n\n");	
		scanf("%c",&choice);
		fflush(stdin);
		if(choice == 'N' || choice == 'n'){
			printf("Great! we have so many north indian dishes listed here, choose your favourite dish\n\n");	
			
			printf("Type D for Daal baati churmaa\n");	
			printf("Type P for Butter panneer thali\n");	
			printf("Type S for Special thali\n");	
			printf("Type C for Customizing your thali\n\n");
				
			printf("Choose your desired food\n");	
			scanf("%c",&choice);
			fflush(stdin);
			
			if(choice == 'D' || choice == 'd'){
				printf("Great! you choose most famous rajasthani thali\n\n");
					
				
			}
			if(choice == 'P' || choice == 'p'){
				printf("Great! you choose most famous northh indian dish\n\n");
					
				
			}
			if(choice == 'S' || choice == 's'){
				printf("Great! you choose something special\n\n");
					
				
			}
			if(choice == 'C' || choice == 'c'){
				printf("Great! you can customize your thali \n\n");
					
				
			}
			
			
			
		}
		else if(choice == 'S' || choice == 's'){
			printf("Great! we have so many south indian dishes listed here, choose your favourite dish\n");	
			
			printf("Type D for Dosa\n");	
			printf("Type I for Itli\n");	
			printf("Type S for Special south indian dish\n");	
			printf("Type C for Customizing your thali\n");	
			
			printf("Choose your desired food\n");	
			scanf("%c",&choice);
			fflush(stdin);
			
		}
		else if(choice == 'G' || choice == 'g'){
			printf("Great! we have so many gujrati dishes listed here, choose your favourite dish\n");	
			
			printf("Type J for Jalebi faafda\n");	
			printf("Type K for Khamann dhoklaa \n");	
			printf("Type S for Special gujrati thali\n");	
			printf("Type C for Customizing your thali\n");
			
			printf("Choose your desired food\n");	
			scanf("%c",&choice);
			fflush(stdin);
			
		}
		else if(choice == 'C' || choice == 'c'){
			printf("Great! we have so many chinese dishes listed here, choose your favourite dish\n");	
			
			printf("Type N for Noodles\n");	
			printf("Type M for Manchurian \n");	
			printf("Type S for Special Mix chinese\n");	
			printf("Type C for Customizing your chinese dish\n");
			
			printf("Choose your desired food\n");	
			scanf("%c",&choice);
			fflush(stdin);
			
		}
		
		else{
		printf("You choose nothing, You should choose what kind of food you wanna have\n");	
		}
	}
	
	
	
	
	
	
	
	else if (choice == 'n' || choice == 'N') {
		printf("We appriciate your choice, Come back when you get hungry");
	}
	
	
}