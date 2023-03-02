//program to find volume of a sphere using a function
#include<stdio.h>
float volume(float radius);
int main()
{
  #define pi 3.142
  float radius,result;
  printf("Enter radius of sphere");
  scanf("%f",&radius);
  result=volume(radius);
  printf("The volume is %f",result);
  return 0;
}
float volume(float radius)
{
  float c;
  #define pi 3.142
  c = pi*4/3*radius*radius*radius;
  return c;
}