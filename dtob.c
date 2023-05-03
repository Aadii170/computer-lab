#include<stdio.h>
#include<math.h>
int main (){

    int n;
    int remender;
    int sum=0;
    int m=0;
    printf("enter a decimal no which you want to convert into binary: ");
    scanf("%d",&n);

    while (n>0)
    {
        remender=n%2;
        sum = sum + remender*pow(10,m);
        n=n/2;
        m++;
    }
    
    
     

    printf("%d", sum);





    return 0;
}