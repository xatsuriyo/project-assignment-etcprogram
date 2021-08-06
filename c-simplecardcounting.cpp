#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int crdcnt=0,totcrd=0,loop=0;
    char in;
    do{
        printf("Simple Card Count\n\n");
        printf("Press + to Increase value (1,2,3,4,5,6)\n");
        printf("Press - to Decrease Value (AS,Jack,King,Queen,10)\n");
        printf("Press = for No Value (7,8,9)\n\n");
        printf("Card Count: %d\n",crdcnt);
        printf("Total Card Used: %d\n\n",totcrd);
        printf("Input: ");
        scanf("%c",&in);
        if(in == '+'){
            crdcnt++;
            totcrd++;
        }else if(in == '-'){
            crdcnt--;
            totcrd++;
        }else if(in == '='){
            totcrd++;
        }

        system("cls");
    }while(loop < 1);

    return 0;
}
