#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int in=0;
	int nkr=1,nkn=1,ntn=0,ck=0,mid=0,ubt=0,mdck=0;
	char ast ='*';

	do{
		system("cls");
		printf("Double Triangle/Pyramids Mirror, Coded by\n");
		printf("Xatsuriyo/Rietzee, please fork dont copy paste\n");
		printf("Input Number: ");
        scanf("%d",&in);
	}while(getchar() != '\n');
	ntn=in-2;ck=(in-1)/2;mid=ck+1;
	
	if(in % 2 ==0){
		mdck = mid;
	}else{
		mdck = mid-1;
	}

	for(int i=0;i<in;i++){
		for(int j=0;j<nkr;j++){
			if(nkr<in && nkr <mid){
				printf("%c",ast);
			}else{
				printf("%c",ast);
			}
		}
		for(int j=0;j<ntn;j++){
			printf(" ");
		}

		if(nkr<in && nkr<mid){
			for(int j=0;j<nkr;j++){
			printf("%c",ast);
			}
		}else if(nkr==mid){
			for(int j=0;j<mdck;j++){
				printf("%c",ast);
			}
		}



		if(nkr == mid || nkr>mid){
			ubt++;
			nkr=nkr-1;
			ntn=ntn+2;
			printf(" \n",nkr);
		}else if(nkr < mid && ubt < 1){
			nkr=nkr+1;
			ntn=ntn-2;
			printf("\n",nkr);
		}else{
			nkr=nkr-1;
			ntn=ntn+2;
			printf("\n",nkr);
		}




	}


	return 0;
}
