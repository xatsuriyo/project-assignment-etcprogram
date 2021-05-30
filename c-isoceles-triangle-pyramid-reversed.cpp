#include <stdio.h>
#include <stdlib.h>

int main(){
	int in;
	int mid,nkrkn,nast,ubt=0;
	char ast = '*';
	
	do{
		system("cls");
		printf("Code by Rietzee/Xatsuriyo\n");
		printf("Please Fork my Github if you use this Code\n");
		printf("Print Reversed Isoceles Triangle using Loop\n");
		printf("Input Number: ");
		scanf("%d",&in);
		
	}while(getchar() != '\n');
	
	nast=in;nkrkn=0;
	
	for(int i=0;i<in;i++){
		for(int j=0;j<nkrkn;j++){
			printf(" ");	
		}
		
		for(int j=0;j<nast;j++){
			printf("%c",ast);
		}
		
		for(int j=0;j<nast;j++){
			printf("%c",ast);
		}

		
		for(int j=0;j<nkrkn;j++){
			printf(" ");	
		}
		
		nkrkn=nkrkn+1;
		nast=nast-1;
		printf("\n");
		
		
	}
	
	return 0;
}
