#include<stdio.h>
#include<stdlib.h>

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
	mid=in/2;mn=in-1;

	for(int i=0;i<in;i++){
		for(int j=0;j<in;j++){
			if(i==0||i==mid||i==mn){
				printf("%c",ast);
			}else if(j==0 && i>0 && j<in){
				printf("%c",ast);
			}else if(j != mid && j!= 0 && j != in-1 && i>0 && j<in){
				printf(" ");
			}else if(j == mid && i> 0 && i<mid || i>mid && i<in){
				printf("%c",ast);
			}else if(j==in-1 && i>0 && j<in){
				printf("%c",ast);
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
