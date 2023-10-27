#include<stdio.h>

int main(){
	
//	First Pattern
//	*
//	**
//	***
//	****
//	*****
	
//	for(int i=0;i<=5;i++){
//		printf("\n");
//		for(int j=0; j<=i;j++){
//			printf(" * ");
//		}
//	}

//	second Pattern
//	*****
//	****
//	***
//	**
//	*

//for(int i=5;i>0;i--){
//	for(int j=1;j<=i;j++){
////	printf("%d",i);
//	printf("* ");
////	printf("\n");
//	}
//	printf("\n");
//}


//	third Pattern
//	          *
//	        * *
//	      * * *
//	    * * * *
//    * * * * *

// 1 1 1 1 *
// 1 1 1 * *
// 1 1 * * *
// 1 * * * *
// * * * * *
//
//	int j=1;
//		for(int i=5;i>0;i--){
//		for(j=1;j<=i-1;j++){
//			printf(" 1 ");
//			printf("   ");
//		}
//		for(int l=5;l>=j;l--){
//		printf(" * ");
//		}
//		printf("\n");
//		}			
//	
//
//	fourth Pattern

//     *
//    * *
//   * * *
//  * * * *
// * * * * * 

//int j=1;
//		for(int i=5;i>0;i--){
//		for(j=1;j<=i-1;j++){
////			printf(" 1 ");
//			printf(" ");
//		}
//		for(int l=5;l>=j;l--){
//		printf(" *");
//		}
//		printf("\n");
//		}


int j=1;
		for(int i=5;i>0;i--){
		for(j=1;j<=i-1;j++){
//			printf(" 1 ");
			printf(" ");
		}
		for(int l=5;l>=j;l--){
		printf(" *");
		}
		printf("\n");
		}
		
		
		for(int i=0;i<4;i++){
		for(j=0;j<=i;j++){
//			printf(" 1 ");
			printf(" ");
		}
		for(int l=4;l>=j;l--){
		printf(" *");
		}
		printf("\n");
		}
		






}