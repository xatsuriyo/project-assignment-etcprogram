#include <stdio.h>
#include <stdlib.h>

int main(){
	int in;
	int nkr,nkn,mid,mn,jn;
    char ast ='*';

	do{
		system("cls");
		printf("Print V Symbol, Coded by\n");
		printf("Xatsuriyo/Rietzee, please fork dont copy paste\n");
		printf("Input Number: ");
        scanf("%d",&in);
	}while(getchar() != '\n');
	
	mid=in/2;
	nkr=0;mn=in-1;
	nkn=mn;
	jn=(in*2)-1;
	
	for(int i=0;i<in;i++){
		for(int j=0;j<jn;j++){
			if(j==nkr&& i<mid || j==nkn && i<mid){
				printf("%c",ast);
			}else if(i<mid){
				printf(" ");
			}

		}
		if(i<mid){
		nkn--;
		nkr++; 
		printf("\n");
		}else{
		}
	 
		
	}
	
	return 0;
}
