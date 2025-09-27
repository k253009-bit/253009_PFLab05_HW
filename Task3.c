#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float discriminant;
    printf("Enter a, b, and c of the quadratic equation ax² + bx + c = 0:\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);


    discriminant = (b*b)-(4*a*c);
    if (discriminant > 0){
        printf("Two real roots");
    } else if (discriminant == 0){
        printf("One real root");
    } else{
        printf("Imaginary roots");
    }

    return 0;
}
