#include<stdio.h>


	int brand=0, model=0, clr=0 ,storagec,sp1=0,sp2=0,p=0;
	int cart,mode=0,purchase=0;

//	------------------------------------------------------------------------------------------------------
	
	int price(p){
		printf("Price of your device is %d\n",p);		
	}
	
//	------------------------------------------------------------------------------------------------------

	
	int storage(sp1,sp2,rs){
		printf("Choose storage capacity for your device\n");
		printf("Type 128 for 128GB variant\n");
		printf("Type 256 for 256GB variant\n");
		scanf("%d",&storagec);
		
		if(storagec==128){
		printf("You choose Iphone 15 with %dGB storage\n",storagec);
		printf("Price of your Iphone 15 with 128GB storage is %d\n",sp1);
		sp1 = rs;
		}
		else if(storagec==256){
		printf("You choose Iphone 15 with %dGB storage\n",storagec);
		printf("Price of your Iphone 15 with 256GB storage is %d\n",sp2);
		sp1 = rs;
		}
	}
	
//	-------------------------------------------------------------------------------------------------------
	
	int color(){
	char mc1[] = "Rose Gold";
	char mc2[] = "Midnight Black";
		printf("Choose color for your device\n");
		printf("Type 1 for Rose Gold\n");
		printf("Type 2 for Midnight Black\n");
		
		scanf("%s",&clr);
		
		if(clr=='rg'){
//		printf("You choose Rose Gold \n");
		printf("You choose %s \n",mc1);
		
		}
		else if(clr=='mb'){
		printf("You choose %s \n",mc2);
	
		}
	}
	
//	---------------------------------------------------------------------------------------------------------------

	int payment(){
		printf("Mode of payment\n");
		printf("type 1 for Cash on delivery\n");
		printf("type 2 for Credit card\n");
		printf("type 3 for UPI\n");
		scanf("%d",&mode);
		
		if(mode == 1){
		printf("You choose cash on delivery\n");
		printf("Type 1 to purchase\n");
		scanf("%d\n",&purchase);
			
		}
		if(mode == 2){
		printf("You choose Credit card option\n");
		printf("Type 1 to purchase\n");
		scanf("%d\n",&purchase);
			
		}
		if(mode == 3){
		printf("You choose UPI\n");
		printf("Type 1 to purchase\n");
		scanf("%d\n",&purchase);
			
		}
	}
	
//	-------------------------------------------------------------------------------------------------------------------

	int addcart(){
		fflush(stdin);
		printf("For checkout type 1\n");
		scanf("%d",&cart);
		fflush(stdin);
		if(cart == 1){
		printf("Purchase page\n\n");

		}
		else{
		printf("Try again\n");
		}
	}
	
//	---------------------------------------------------------------------------------------------------------------------

int apple(){
char mod1[]= "Iphone 15";
char mod2[]= "Iphone 15 pro";
char mod3[]= "Iphone 15 pro max";
	
		printf("Choose your model\n");
		printf("Type 1 for Iphone 15\n");
		printf("Type 2 for Iphone 15 pro\n");
		printf("Type 3 for Iphone 15 pro max\n");
		scanf("%d",&model);
		
		if(model==1){
		printf("You choose Iphone 15\n");
		storage(99,199);
		color();
		ov(mod1,storagec,clr);
		amount(249);
//		addcart();
//		payment();
		}
		else if(model==2){
		printf("You choose Iphone 15 pro\n");
//		storage();
//		color();
		}
		else if(model==3){
		printf("You choose Iphone 15 pro max\n");
//		storage();
//		color();
		}
	}
//------------------------------------------------------------------------------------------------------------------------
char brand_i[] = "Apple";
char brand_s[] = "Samsung";



int brandfunc(){
		printf("Welcome to our Mobile World\n");
		printf("What type of brand you are looking for?\n");
		printf("Type 1 for Apple \n");
		printf("Type 2 for Samsung \n");
		scanf("%d",&brand);
	
		if(brand==1){
			printf("you choose Apple \n");
			apple();
		}
		else if(brand==2){
			printf("you choose Samsung \n");
//			samsung();
		}
		else{
			printf("You choose nothing \n");
		}	
	}

//------------------------------------------------------------------------------------------------------------------------
int ov(mod1,storagec,clr,am){
		printf("Product details\n");
		
		printf("Model : %s\n",mod1);
		printf("Storage : %dGB\n",storagec);
		printf("Color : %s\n",clr);
		amount();
		
		
	}
//------------------------------------------------------------------------------------------------------------------------

int amount(am){
	printf("Price of your device is  : %d \n",am);
}


//------------------------------------------------------------------------------------------------------------------------


int main(){
	brandfunc();
}

