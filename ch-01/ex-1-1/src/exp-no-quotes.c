/*
 * EXPERIMENT 5: Remove quotes around the string
 * -----------------------------------------------
 * What was removed: The " " around "hello, world\n"
 *
 * Compile this file:
 *   gcc -Wall -Wextra -std=c99 exp-no-quotes.c
 *
 * Expected errors:
 *   error: 'hello' undeclared (first use in this function)
 *   error: expected ')' before ',' token
 *   error: 'world' undeclared
 *
 * Why this happens:
 *   Double quotes tell the compiler that the content is a
 *   string literal — a sequence of characters. Without quotes,
 *   the compiler treats each word as a variable name (identifier).
 *   Since hello, world, and \n are not declared variables, it
 *   throws "undeclared" errors.
 *
 * Lesson:
 *   String literals in C must always be wrapped in double quotes " "
 *   Single quotes ' ' are for single characters only, e.g. 'a'
 */

#include <stdio.h>

int main(void)
{
	printf(hello, world\n); /* quotes intentionally removed */

	return 0;
}
