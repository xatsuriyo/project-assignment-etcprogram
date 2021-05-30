#include<stdio.h>
#include<stdlib.h>

int main(){
	int in,mn,n,sp,mid;
	char ast = '*';
	
	do{
		system("cls");
		printf("Code by Rietzee/Xatsuriyo\n");
		printf("Please Fork my Github if you use this Code\n");
		printf("Print Left Side Triangle\n");
		printf("Input Number: ");
		scanf("%d",&in);
		
	}while(getchar() != '\n');
	sp=in-1;n=1;mn=in-1;mid=in/2;
	
	for(int i=0;i<in;i++){
		for(int j=0;j<sp;j++){
			printf(" ");
		}
		for(int j=0;j<n;j++){
			printf("%c",ast);
		}
	
		if(i<mid){
			sp=sp-1;
			n=n+1;
		}else{
			sp=sp+1;
			n=n-1;
		}
		printf("\n");
	}

	
	return 0;
}
