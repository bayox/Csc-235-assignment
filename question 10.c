//C program to count 1-N

#include <stdio.h>
int main(){
	int user;
	int i = 1;
	printf("Enter a number: ");
	scanf("%d", &user);
	// Below we create a loop to check whether the counter 'i' is less than or equal to the if "user" variable 
	while(i<=user){
		printf("%d\n", i);
		i++;
	}
	
}
