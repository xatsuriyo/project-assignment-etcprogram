#include <stdio.h>
#include <stdlib.h>


int main(){
	int in;
	int krn,knn;
	
	do{
		printf("Code by Xatsuriyo/Rietzee\n");
		printf("Please Fork if u use this\n");
		printf("Print X Symbol using Loops \n");
		printf("Input: ");
		
		scanf("%d",&in);		
	}while(getchar() != '\n');
	
	krn=0;knn=in-1;
	
	for(int i=0;i<in;i++){
		
		for(int j=0;j<in;j++){
			if(j==krn){
				printf("*");
			}else if(j==knn){
				printf("*");
			}else{
				printf(" ");
			}
		}
		
		krn=krn+1;
		knn=knn-1;
		printf("\n");
	}
	
	return 0;
}
