#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	for(i = 1; i< argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	char *states[] = {
		"California", "Oregon", "Washington", "Texas"
	};
	int num_states = 4;
	
	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}	

	return 0;
}


/*
Heres how the for-loop works:
1. The iniitializer is code that is run to setup the loop, in this case i=0
2. next the TEST boolean expression is checked, and if its false(0) then CODE is skipped, doing nothing
3. the CODE runs, does whatever it does.
4. After the CODE runs, the INCREMENTER part is run, usually incrementing something, like in i++
5. And it continues again with Step 2 until the TEST is false(0)

This for loop is going through the command line arguments using argc and argv like this:

1. The OS passes each command line argument as a string in the argv array. The programs name (./ex10) is at 0, with the rest coming after it.
2. The OS also sets argc to the number of arguments in the argv array so you can process them without going past the end. Remember that if you give one argument, the programs name is the first, so argc is 2.
3. The for-loop sets up with i = 1 in the initializer.
4. It then tests that i is less that argc with the test i < argc. Since initiially 1 <2 will pass.
5. It then runs the code which just prints out the i and uses i to index into argv.
6. the incrementer is then run using the i++ syntax, which is : i = i + 1
7. this then repeats until i < argc is finally false(0) when the loop exits and the program continues.

*/

