// If, Else-if, else

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	if(argc == 1) {
		printf("you only have one argument. You suck.\n");
	} else if(argc > 1 && argc < 4) {
		printf("Here's your arguments:\n");

		for(i = 0; i < argc; i++){
			printf("%s", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments. You suck FAM.\n");
	}
	return 0;
}

/* 
This is like most other languages except for some specific C differences:
1. As mentioned before, the TEST parts are false if they evaluate to 0, and true otherwise.
2. You have to put parenthesis around the TEST elements, while some other language let you skip dat.
3. You don't need the {} braces to enclose the code, but it is very bad form to not use them. The braces make it clear where one branch of code begins and ends. If you don't include it then errors come up.

Other than that, they work like others do. you don't need to have either else if or else parts. 
*/ 
