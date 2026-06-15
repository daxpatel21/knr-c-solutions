/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter 1, Exercise 1-9
 *
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 *
 * Key concept: use a flag to track whether the previous
 * character was a blank. If it was, suppress further blanks
 * until a non-blank character is seen.
 *
 * Example:
 *   Input:  "hello     world     foo"
 *   Output: "hello world foo"
 *
 * Author : Dax Patel
 * Date   : 2026-06-15
 */

#include <stdio.h>

int main(void)
{
	int c, blank = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (!blank) {
				putchar(' ');
				blank = 1;
			}
		} else {
			putchar(c);
			blank = 0;
		}
	}

	return 0;
}
