#include <stdio.h>
#include <string.h>

int main(){
    char cUser[] = "SaadAhmed";
    char cPass[] = "Saad2005*";
    char inUser[50];
    char inPass[50];

    printf("Enter username: ");
    scanf("%s", inUser);
    printf("Enter password: ");
    scanf("%s", inPass);

    if (strcmp(inUser, cUser) == 0){
        if (strcmp(inPass, cPass) == 0){
            printf("Login successful\n");
        } else{
            printf("Incorrect password\n");
        }
    }
    else{
        printf("Username not found\n");
    }

    return 0;
}
