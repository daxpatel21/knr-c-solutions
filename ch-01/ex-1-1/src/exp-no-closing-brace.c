/*
 * EXPERIMENT 4: Remove the closing brace }
 * -----------------------------------------
 * What was removed: The closing } of main()
 *
 * Compile this file:
 *   gcc -Wall -Wextra -std=c99 exp-no-closing-brace.c
 *
 * Expected error:
 *   exp-no-closing-brace.c: In function 'main':
 *   exp-no-closing-brace.c:35:1: error: expected '}' at end of input
 *
 * Why this happens:
 *   Every opening brace { must have a matching closing brace }.
 *   The compiler reads the entire file looking for the closing }
 *   of main(). When it reaches the end of the file without finding
 *   it, it reports an error.
 *
 * Lesson:
 *   Braces must always be matched. A good editor (like Vim with
 *   showmatch enabled) highlights matching braces for you.
 *   In Vim, press % on a brace to jump to its matching brace.
 */

#include <stdio.h>

int main(void)
{
	printf("hello, world\n");

	return 0;
	/* } intentionally removed */
