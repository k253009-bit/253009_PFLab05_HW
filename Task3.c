#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float discriminant, r1, r2;

    printf("Enter a, b, and c of the quadratic equation ax² + bx + c = 0:\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0){
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real roots: %.2f and %.2f\n", r1, r2);
    } else if (discriminant == 0){
        r1 = -b / (2 * a);
        printf("One real root: %.2f\n", r1);
    } else{
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Imaginary roots: %.2f ± %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
