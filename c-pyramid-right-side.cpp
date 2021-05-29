#include <stdio.h>
#include <stdlib.h>

int main(){
    int in,i=0,j=0,c=0,ln=0;;
    int er,at,bw,cm;
    char ast = '*';
    do{
    	system("cls");
    	printf("Please do Input Number Only !\n");
		printf("RIGHT SIDE PYRAMID DEMONSTRATION USING FOR LOOPS\n");
    	printf("Pyramid only completed with Odds Numbers\n");
    	printf("Even Numbers will be converted to Odds\n");
    	printf("Input Number: ");scanf("%d",&in);
	}while(getchar() != '\n');
	
	if(in % 2 == 0){ //you can cancel conversion from Even to Odds by adding comment to this function
		in=in+1;
	}
	printf("\n");
	
	for(i=0;i<in;i++){
		if(i == 0){
			printf("%c",ast);
			printf("\n");
			at++;bw=in/2;
		}else{
			if(i == in){
				printf("\n");
				printf("%c",ast);
			}else if(at <= bw){
				for(j==0;j<=at;j++){
					printf("%c",ast);
				}
			//	printf("\nat=%d|bw=%d\n",at,bw);
				printf("\n");
				j=0;at++;
			}else if(at >= bw){
				at--;j=0;
				for(j==0;j<bw;j++){
					printf("%c",ast);
				}
				//printf("\nat=%d|bw=%d\n",at,bw);
				printf("\n");
				bw--;
			}else{
				printf("\n");
				
			}
				
		}
	}

    return 0;
}

