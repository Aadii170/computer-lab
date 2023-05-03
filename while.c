#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int reminder;
    int digit=0;
    scanf("%d",&n);
    while ( n>0)
    {
       reminder=n%10;
       sum=sum+reminder;
       n=n/10;
       digit++;
    }
    printf("%d \n",sum);
    printf("%d",digit);


    return 0;
}