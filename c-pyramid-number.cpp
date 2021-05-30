#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int in=0;
	int mid,mn,n,num=1,doub,knkr;
	char ast ='*';

	do{
		system("cls");
		printf("Print Number Pyramid Coded by\n");
		printf("Xatsuriyo/Rietzee, please fork dont copy paste\n");
		printf("Input Number: ");
        scanf("%d",&in);
	}while(getchar() != '\n');
	
	mid=in/2;doub=in*2;mn=doub-1;n=1;knkr=in-1;
	
	for(int i=0;i<in;i++){
		for(int k=0;k<knkr;k++){
				printf(" ");
		}
		for (int k=0;k<n;k++){
				printf("%d",num);
		}
		
		for(int k=0;k<knkr;k++){
				printf(" ");
		}
		
		n=n+2;
		num++;
		knkr--;
		printf("\n");
	}
	

	return 0;
}
