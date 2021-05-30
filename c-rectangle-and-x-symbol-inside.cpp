#include <stdio.h>
#include <stdlib.h>


int main(){
	int in,mn,xkr,xkn,mid;
	char ast = '*';
	
	do{
		system("cls");
		printf("Code by Rietzee/Xatsuriyo\n");
		printf("Please Fork my Github if you use this Code\n");
		printf("Print Cross inside Rectangle\n");
		printf("Input Number: ");
		scanf("%d",&in);
		
	}while(getchar() != '\n');
	mn=in-1;xkr=0;xkn=in-1;mid=in/2;
	
	for(int i=0;i<in;i++){
			
		for(int j=0;j<in;j++){
			if(i<1 || i == in-1){
				printf("*");
			}else if(j == 0 && i>0 && i< in-1){
				printf("*");
			}else if(j == in-1 && i > 0 && i < in-1){
				printf("*");
			}else if(j == xkr && i > 0 && i < in-1){
				printf("*");
			}else if(i > 0 && i < in-1 && j == xkn){
				printf("*");
			}else if(i > 0 && i < in-1){
				printf(" ");
			}
			
		}
		
		if(i<mid){
			xkr=xkr+1;
			xkn=xkn-1;	
			printf("\n");
		}else{
			xkr=xkr+1;
			xkn=xkn-1;	
			printf("\n");	
		}
		
		
	}
	
	return 0;
}

