#include<stdio.h>

float calculate_area(int);

void main()
 {
 int radius;
 float area;
 printf("\nEnter the radius of the circle :");
 scanf("%d", &radius);
 area = calculate_area(radius);
 printf("\nArea of circle : %f ",area);
 return 0;
 }

float calculate_area(int radius)
 {
 float areaCircle;
 areaCircle = 3.14 * radius * radius;
 return (areaCircle);
 }
