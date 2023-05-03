#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int reminder;
    int sum=0;

    while (n>0)
    {
        reminder=n%10;
        sum=sum+reminder;
        sum=sum*10;
        n=n/10; 
    } 
     sum= sum/10;
     

    printf("%d", sum);
    

    return 0;
}