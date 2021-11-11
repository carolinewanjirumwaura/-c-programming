//demontrstion of all variables
#include<stdio.h>
static double pi=3.142;//static var
int r=7;//local var
double a=5.0;//global var
int h=17;//external var
double main ()
{
    double pi,a,volume_of_a_cylinder;
    int h,r;
    volume_of_a_cylinder=(a*r*r*h*pi);
    printf("volume_of_a_cylinder=%lf", volume_of_a_cylinder);
    
}
