#include<stdio.h>


void area_calc(int);

void main()
 {
 int square_side;
 printf("Enter the side of square :");
 scanf("%d",&square_side);
 area_calc(square_side);
 return 0;
 }

void area_calc(int square_side)
 {
 int area;
 area = square_side * square_side;
 printf("Area of square = %d\n", area);
 }
