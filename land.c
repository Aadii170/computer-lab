#include<stdio.h>
int main(){
    int s;
    int l,b,a,r,h,b;
    scanf("%d",&s);
    printf("type 1 for rectangular area, 2 for square area, 3 for circle");
    switch (s)
    {
    case 1:
        
        printf("Enter length and breadth of rectangle: ");
        scanf("%d\t%d",&l,&b);
        printf("Area of rectangle is %d",l*b);
        break;
    case 2 :
        
        printf("Enter side of square: ");
        scanf("%d",&a);
        printf("Area of the land is %d", a*a);
        break;
    case 3:
       
        printf("Enter the Radius of the circle: ");
        scanf("%d",&r);
        printf("Area of the cirlular plot is: %2f" , 3.14*r*r);
        break;

    case 4:
        printf("Enter the height and base of the triangle: ");
        scanf("%d \t %d",&h,&b)
        printf("Area of triangular plot is: ", 0.5*h*b) 
        break;    


    
    default:
        break;
    }


    return 0;
}