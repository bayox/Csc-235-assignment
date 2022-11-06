//C program to accept the names of 10 students

#include <stdio.h>
int main(){
	int i=1;
	//while i<= 10, we created a character limit of 100
	while (i<=10){
		char Name[100];	
		printf("Enter name of Student %d: ",i);
		// fgets helps in accepting input in a formatted manner
		fgets(Name, 100, stdin);
		printf("Hello %s\n\n",Name);
		i++;
		}
	return 0;
	
}
	
