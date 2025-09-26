#include <stdio.h>

int main(){
    int PreReq;  
    int CourseFull;     

    printf("Have you completed the prerequisite? 1(Yes), 0(No): ");
    scanf("%d", &PreReq);
    
    printf("Is the course full? 1(Yes), 0(No): ");
    scanf("%d", &CourseFull);
    
    if (PreReq == 1){
        if (CourseFull == 0){
            printf("Enrolled successfully\n");
        } else{
            printf("Cannot enroll: course is full\n");
        }
    } else{
        if (CourseFull == 0){
            printf("Cannot enroll: prerequisite missing\n");
        } else{
            printf("Cannot enroll: prerequisite missing and course is full\n");
        }
    }

    return 0;
}
