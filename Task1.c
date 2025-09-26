#include<stdio.h>

int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age < 5){
		printf("Your ticket is Free.");
	} else if(age >= 65){
		printf("You get a Discount.");
	} else if(age >= 5 && age < 65){
		printf("You pay standard price.");
	}
	
	return 0;
	
}
