//calculating volume of a cylinder
#include<stdio.h>
float A;//A represents area of a circle;
int r;
float pi=3.142;

int area()
{
    float A;
    int r=42;
    A=(pi*r*r);
    printf("area=%f",A);
    return A;
}
 
 int main()
{
    int h,A;
    float volume;
    printf("enter value h");
    scanf("%d",&h);
    volume=area()*(h);
    printf("volume =%f",volume);
    return volume;
}
