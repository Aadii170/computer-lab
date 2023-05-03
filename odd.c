#include <stdio.h>
int main(){
    int no=1;
    while (no<50){
    if (no%2!=0 && no%3!=0 && no%7!=0)
    {
        printf("%d ",no);
        
    }
        no++;
    }

    return 0;
}