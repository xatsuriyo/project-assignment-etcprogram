#include <stdio.h>
#include <stdlib.h>

int main(){
//LOOPING
int i=0,j=0;
//input
int n=0;
//check
int bot=0,up=0;

printf("Print X Smybol inside Rectangle using 2D Array\n");
printf("Input Size: ");
scanf("%d",&n);
int sym[n][n];
up=0;bot=n-1;

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==0||i==n-1){
            printf("*");
        }else if(j==up&&i>0||j==bot&&i<n-1){
            printf("*");
        }else if(j==0&&i>0||j==n-1&&i<n-1){
            printf("*");
        }else{
            printf(" ");
        }
    }
    up=up+1;bot=bot-1;
    printf("\n");
}

return 0;
}
