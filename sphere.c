//
// Created by 22166 on 2023/9/7.
//

#include <stdio.h>
#include <math.h>
int main()
{
    const double PI=3.14159;
    int radius=100;
    double surface_area=4*PI*radius*radius;
    double volumn=4.0/3*PI*pow(radius,3);
    printf(" %-15.4f\n %-15.4f\n",surface_area,volumn);
    return 0;
}
