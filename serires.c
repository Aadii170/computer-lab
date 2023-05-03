#include <stdio.h>
int main(){
    int no;
    scanf("%d",&no);
    for (int i = 1; i <=no; i++)
    {
       for (int j = 0; j<i ; j++)
       {
        printf("A");
       }
       printf(" ");
    }
    


    return 0;
}