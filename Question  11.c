//C program that reverses a sentence

#include <stdio.h>
void reverse_sentence();
int main(){
	printf("Enter a sentence: ");
	reverse_sentence();
	return 0;
}

void reverse_sentence(){
	char c;
//We accept input here and create a memory address for it below
	scanf("%c",&c);
	//If c is not equal to a new line, reverse sentence
	
	if (c!='\n'){
		reverse_sentence();
		printf("%c",c);
	}
}

