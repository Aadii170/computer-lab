#include <stdio.h>
int main(){
    int no;
    int x=0;
    int y=1;
    int z=x+y;

    scanf("%d",&no);
    printf("0 1 ");
    while(z<=no){
        x=y;
        y=z;
        printf("%d ",z);
        z=x+y;
        

    }

    return 0;
}