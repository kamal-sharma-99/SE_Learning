#include<stdio.h>
int main(){
	char player;
	float runs,balls,matches;
	float over, brun;
	
	float sr, avg, eco;
	printf("Enter A for all rounder \n");
	printf("Enter B for batsman \n");
	printf("Enter C for bowler \n");
	
	scanf("%c",&player);
	
	if(player == 'b' || player == 'B'){
	printf("You selected batsman\n\n");
	
	printf("Enter player's total runs\n");
	scanf("%f",&runs);
	printf("Enter total balls player played\n");
	scanf("%f",&balls);
	printf("Enter total matches player played\n");
	scanf("%f",&matches);
	
		sr = (runs/balls)*100;
		printf("Strike rate is : %f\n",sr);
		avg = (runs/matches);
		printf("Average is : %f\n",avg);
	}
	else if(player == 'c' || player == 'C'){
	printf("You selected bowler\n\n");
	printf("Enter overs \n");
	scanf("%f",&over);
	printf("Enter total runs player gave in bowling\n");
	scanf("%f",&brun);
		
		eco = (brun/over);
		printf("Bowling economy is : %f\n",eco);
	}
	
	
	else if(player == 'a' || player == 'A'){
	printf("You selected all rounder\n\n");
	
	printf("Enter player's total runs\n");
	scanf("%f",&runs);
	printf("Enter total balls player played\n");
	scanf("%f",&balls);
	printf("Enter total matches player played\n");
	scanf("%f",&matches);
	
		sr = (runs/balls)*100;
		printf("Strike rate is : %f\n",sr);
		avg = (runs/matches);
		printf("Average is : %f\n",avg);
		
	printf("Enter overs \n");
	scanf("%f",&over);
	printf("Enter total runs player gave in bowling\n");
	scanf("%f",&brun);
		
		eco = (brun/over);
		printf("Bowling economy is : %f\n",eco);
	}
	
}