#include <stdio.h>
 
void main()
{
    int code;
    float side, base, length, breadth, height, area, radius;
 
    printf(" 1 -> Circle\n");
    printf(" 2 -> Rectangle\n");
    printf(" 3 -> Triangle\n");
    printf("Enter the Figure code\n");
    scanf("%d", &code);
    switch(code)
    {
    case 1:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area = 3.142 * radius * radius;
        printf("Area of a circle = %f\n", area);
        break;
    case 2:
        printf("Enter the breadth and length\n");
        scanf("%f %f", &breadth, &length);
        area = breadth * length;
        printf("Area of a Reactangle = %f\n", area);
        break;
    case 3:
        printf("Enter the base and height\n");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of a Triangle = %f\n", area);
        break;
    default:
        printf("Error in figure code\n");
        break;
    }
}