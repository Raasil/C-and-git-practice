// Switch statements. Switch statements are like a "jump table". Instead of random boolean expressions, you can only put expressions that result in integers, and these integers are used to calculate jumps from the top of the "switch" to the part that matches the value

#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("ERROR: You need one argument.\n");
		// this is how to abort a program
		return 1;
	}

	int i = 0;
	for(i = 0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];

		switch(letter) {
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				break;
			case 'e':	
			case 'E':
				printf("%d: 'E'\n", i);
				break;
			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break;
			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				break;
			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break;
			case 'y':
			case 'Y':
				if(i > 2) {
					//its only sometimes Y
					printf("%d: 'Y'\n", i);
				}
				break;
			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}
	return 0;
}

/*
1. The compiler marks the place in the program where the switch-statement starts, lets call this location Y.
2. It then evaluates the expression in switch(letter) to come up with a number. In this case the number will be the raw ASCII code of the letter in argv[1].
3. The compiler has also translated each of the case blocks like case 'A': into a location in the program that is that far away. So the code under case ;A; is at Y + 'A' in the program.
4. It then does the math to figure out where Y=letter is located in the switch-statement, and if its too far then it adjusts it to Y+default
5. once it knows the location, the program "jumps" to that spot in the code, and then continues running. This is why you have break on some of the case blocks, but not others.
6. if 'a' is entered, then it jumps to case 'a', theres no break so it "falls through" to the one right udner case 'A' which has code and a break.
7. Finally it runs this code, hits the break then exits out of the switch-statement entirely.

This is deep but just remember these rules.
1. Always include a default: branch so that you can catch any missing inputs,
2. Dont allow fall through unless you really want it, and its a good idea to add a comment //fallthrough so people know that its on purpose.
3. Always write the case and the break before you write the code that goes in it.
4. Try to just use if-statements instead if you can

*/ 
