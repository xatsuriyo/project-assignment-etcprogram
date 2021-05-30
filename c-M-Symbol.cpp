#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int in=0;
	int mid,mn,kn,doub,kr;
	char ast ='*';

	do{
		system("cls");
		printf("Print M Symbol Coded by\n");
		printf("Xatsuriyo/Rietzee, please fork dont copy paste\n");
		printf("Input Number: ");
        scanf("%d",&in);
	}while(getchar() != '\n');
	kr=0;mn=in-1;doub=in*2;mid=doub/2;kn=doub-1;
	
	for(int i=0;i<in;i++){
		for(int j=0;j<doub;j++){
			if (j==0 || j>=doub-1){
				printf("%c",ast);
			}else if(j == mid && i==mn){
				printf("%c",ast);
			}else if(j == kr && i>0 && j!= mid || j==kr && i<doub && j!= mid){
				printf("%c",ast);
			}else if(j == kn && i>0 && j!= mid || j==kn && i<doub && j!= mid){
				printf("%c",ast);
			}
			else{
				printf(" ");
			}
		}
		
		
		kr++;
		kn--;
		printf("\n");
	}

	return 0;
}
