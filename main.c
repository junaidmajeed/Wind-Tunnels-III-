#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, f_a, b, f_b, c, f_c;
    printf("Use degrees for angle values \n");
    printf("Enter 1st coefficient of lift and flight-path angle: \n");
    scanf("%lf %lf",&f_a, &a);
    printf("Enter 2nd coefficient of lift and flight-path angle: \n");
    scanf("%lf %lf",&f_c, &c);
    printf("Enter new coefficient of lift: \n");
    scanf("%lf", &f_b);
    b = a +(f_b - f_a)/(f_c - f_a)*(c - a);

    printf("New flight-path angle in degree: %lf \n", b);

    return 0;
}
