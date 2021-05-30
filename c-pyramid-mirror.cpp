#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int in=9;
	int nkr=1,nkn=1,ntn=in-2,ck=(in-1)/2,mid=ck+1,ubt=0;
	char ast ='*';
	
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
			for(int j=0;j<mid-1;j++){
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
