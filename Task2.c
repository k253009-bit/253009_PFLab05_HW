#include <stdio.h>

int main(){
    int powerOn;
    char lightColor;
    printf("Enter power status (1 for On, 0 for Off): ");
    scanf("%d", &powerOn);
    if (powerOn == 1){
        printf("Enter the light color (R, Y, G): ");
        scanf(" %c", &lightColor);  
        if (lightColor == 'R'){
            printf("Stop\n");
        } else if (lightColor == 'Y'){
            printf("Caution\n");
        } else if (lightColor == 'G'){
            printf("Go\n");
        } else{
            printf("Invalid light color\n");
        }
    } else{
        printf("Signal Off\n");
    }

    return 0;
}

