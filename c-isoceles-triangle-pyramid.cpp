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
		printf("Print Isoceles Triangle using Loop\n");
		printf("Input Number: ");
		scanf("%d",&in);
		
	}while(getchar() != '\n');
	
	mid = in/2;nkrkn = in;nast=1;
	
	for(int i=0;i<in;i++){
		
		for(int j = 0;j<nkrkn;j++){
			printf(" ",ast);
		}
		
		for(int j=0;j<nast;j++){
			printf("%c",ast);
		}
		
		for(int j = 0;j<nkrkn;j++){
			printf(" ",ast);
		}
		
		nast=nast+2;
		nkrkn=nkrkn-1;
		
		printf("\n");
		
	}
	
	
	return 0;
}
