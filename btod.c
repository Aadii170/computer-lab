#include<stdio.h>
#include<math.h>
int main(){
     int n;
     int sum=0;
     int m=0;
     int remender;
     printf ("Enter an binary no : ");
     scanf("%d",&n);


     while (n>0)
     {
        remender=n%10;
        sum+=remender * pow(2,m);
        n=n/10;
        m++;
     }
      

    printf("decimal no of given binary no is: ");
    printf("%d",sum);
     


    return 0;
}