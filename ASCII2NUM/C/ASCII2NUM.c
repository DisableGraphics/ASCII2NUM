#include <stdio.h>
int main(){
	printf("Insert a character: ");
	
	char character;

	scanf("%c\n",character);

	int valueOfChar;

	valueOfChar = character;
	
	printf("The value of character %c is %d", character, valueOfChar);
}