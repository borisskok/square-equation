#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;  //a*x*x + b*x + c = 0
    printf("Hello!\n Let's solve square equation!\n Enter factors of equation!\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    double root_of_D, D;
    D = b*b - 4*a*c;
    root_of_D = sqrt(D);
    if(D > 0)
    {
        printf("This square equation has 2 roots.\n"
               "The first root of square equation is equal %.3lf\n"
               "The second root of square equation is equal %.3lf \n",
               (root_of_D - b)/(2*a), (- root_of_D - b)/(2*a));
    }
    else if(0 == D)
    {
        printf("This square equation has 1 root.\n"
               "The root of square equation is %.3lf", (- b)/(2*a));
    }
    else
    {
        printf("This square equation has not roots!");
    }
    return 0;
}
