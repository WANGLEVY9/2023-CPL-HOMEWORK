//
// Created by 22166 on 2023/9/8.
//
//exponential指数

#include <stdio.h>
int main()
{
    const double MOL=6.02e23;
    const int MOL_PER_GRAM=32;
    int mass=6;
    double quantity=mass*1.0/32*MOL;
    printf("quantity=%.3f\n quantity=%.5g\n",quantity,quantity);
}