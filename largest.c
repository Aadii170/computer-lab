#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d  %d  %d",&a,&b,&c);
    int max=a;
    if (b>a && b>c)
    {
        max=b;
        printf("%d", max);

    }
    if (c>a &&  c>b)
    {
        max=c;
        printf("%d", max);
    }
    else{
        max=a;
    }
    
    

    return 0;
}