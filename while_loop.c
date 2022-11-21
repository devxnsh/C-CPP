#include <stdio.h>
#include <math.h>
int main(){
	char vowcheck;
	char choice;
	choice='y';
	while (choice == 'y'){
		printf("Enter a Character");
		scanf("%c",&vowcheck);
		if (vowcheck == 'A'||vowcheck == 'E'||vowcheck == 'I'||vowcheck == 'O'||vowcheck == 'U'||vowcheck == 'a'||vowcheck == 'e'||vowcheck == 'i'||vowcheck == 'o'||vowcheck == 'u'){
			printf("Vowel");
		}
		else{
			printf("Consonant\n");
		
		}
		printf("Would you like to try again? y/n");
		scanf("%c",&choice);
		}
	return 0;
	}

