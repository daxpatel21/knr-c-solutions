/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter 1, Exercise 1-6
 *
 * Verify that the expression getchar() != EOF evaluates
 * to either 0 or 1.
 *
 * Key concept: In C, relational operators (!=, ==, <, >)
 * always produce an integer result — 1 (true) or 0 (false).
 *
 * Due to operator precedence, != binds tighter than =, so:
 *   c = getchar() != EOF
 * is parsed as:
 *   c = (getchar() != EOF)
 * not as:
 *   (c = getchar()) != EOF
 *
 * Run: type any character + Enter → prints 1
 * Run: press Ctrl+D (EOF)         → prints 0
 *
 * Author : Dax Patel
 * Date   : 2026-04-29
 */

#include <stdio.h>

int main(void)
{
	int c;

	c = getchar() != EOF; /* parsed as: c = (getchar() != EOF) */

	printf("The expression is: %d\n", c);

	return 0;
}
