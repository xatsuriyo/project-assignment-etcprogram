#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int in=0;
	int mid,mn,kn;
	char ast ='*';

	do{
		system("cls");
		printf("Print N Symbol Coded by\n");
		printf("Xatsuriyo/Rietzee, please fork dont copy paste\n");
		printf("Input Number: ");
        scanf("%d",&in);
	}while(getchar() != '\n');
	mid=in/2;mn=in-1;
	kn=0;
	
	for(int i=0;i<in;i++){
		for(int j=0;j<in;j++){
			if(j==0 || j==mn){
				printf("%c",ast);
			}else if(j==kn && i>0 || j==kn && i<mn){
				printf("%c",ast);
			}else{
				printf(" ");
			}
		}
		
		kn++;
		printf("\n");
	}
	

	return 0;
}
