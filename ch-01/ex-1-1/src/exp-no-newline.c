/*
 * EXPERIMENT 2: Remove \n from the string
 * ----------------------------------------
 * What was removed: The \n at the end of "hello, world\n"
 *
 * Compile this file:
 *   gcc -Wall -Wextra -std=c99 exp-no-newline.c
 *
 * Expected behaviour:
 *   This compiles cleanly with NO errors and NO warnings.
 *
 *   Output:
 *     hello, worlddaxpatel@hostname$
 *
 *   The shell prompt appears right after "hello, world" on the
 *   same line because no newline character was printed.
 *
 * Why this happens:
 *   \n is the escape sequence for a newline character (ASCII 10).
 *   printf() does not automatically add a newline. Without \n,
 *   the cursor stays on the same line after printing.
 *
 * Lesson:
 *   \n must be explicitly written when you want a new line.
 *   This is unlike Python's print() which adds one automatically.
 */

#include <stdio.h>

int main(void)
{
	printf("hello, world"); /* \n intentionally removed */

	return 0;
}
