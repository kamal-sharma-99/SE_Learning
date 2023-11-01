#include<stdio.h>


	int brand=0, model=0, clr=0 ,storagec,sp1=0,sp2=0,p=0;
	int cart,mode=0,purchase=0;

//	------------------------------------------------------------------------------------------------------
	
	int price(p){
		printf("Price of your device is %d\n",p);		
	}
	
//	------------------------------------------------------------------------------------------------------
	
	int storage(sp1,sp2){
		printf("Choose storage capacity for your device\n");
		printf("Type 1 for 128GB variant\n");
		printf("Type 2 for 256GB variant\n");
		scanf("%d",&storagec);
		
		if(storagec==1){
		printf("You choose Iphone 15 with 128GB storage\n");
		printf("Price of your Iphone 15 with 128GB storage is %d\n",sp1);
		}
		else if(storagec==2){
		printf("You choose Iphone 15 with 256GB storage\n");
		printf("Price of your Iphone 15 with 256GB storage is %d\n",sp2);
		}
	}
	
//	-------------------------------------------------------------------------------------------------------
	
	int color(){
		printf("Choose color for your device\n");
		printf("Type 1 for Rose Gold\n");
		printf("Type 2 for Midnight Black\n");
		
		scanf("%d",&clr);
		
		if(clr==1){
		printf("You choose Rose Gold \n");
		}
		else if(clr==2){
		printf("You choose Midnight Black \n");
		
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
		printf("Choose your model\n");
		printf("Type 1 for Iphone 15\n");
		printf("Type 2 for Iphone 15 pro\n");
		printf("Type 3 for Iphone 15 pro max\n");
		scanf("%d",&model);
		
		if(model==1){
		printf("You choose Iphone 15\n");
		storage(99,199);
		color();
		addcart();
		payment();
		}
		else if(model==2){
		printf("You choose Iphone 15 pro\n");
		storage();
		color();
		}
		else if(model==3){
		printf("You choose Iphone 15 pro max\n");
		storage();
		color();
		}
	}
//------------------------------------------------------------------------------------------------------------------------

int brandfunc(){
		printf("Welcome to our Mobile World\n");
		printf("What type of brand you are looking for?\n");
		printf("Type 1 for Apple \n");
		printf("Type 2 for Samsung \n");
		printf("Type 3 for Oppo \n");
		scanf("%d",&brand);
	
		if(brand==1){
			printf("you choose Apple \n");
			apple();
		}
		else if(brand==2){
			printf("you choose Samsung \n");
		}
		else if(brand==3){
			printf("you choose Oppo \n");
		}
		else{
			printf("You choose nothing \n");
		}	
	}

//------------------------------------------------------------------------------------------------------------------------
int ov(){
		printf("Product details\n");
		printf("Model : %s \n");
		printf("Storage : %dGB\n");
		printf("Color : %s\n");
		printf("Price : %d\n");		
	}
//------------------------------------------------------------------------------------------------------------------------


int main(){
	brandfunc();
}

