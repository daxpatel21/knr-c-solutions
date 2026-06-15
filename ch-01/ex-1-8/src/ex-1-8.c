/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter 1, Exercise 1-8
 *
 * Write a program to count blanks, tabs, and newlines.
 *
 * Reads characters from stdin until EOF (Ctrl+D on Linux).
 * Counts three whitespace characters:
 *   ' '  blank (space)
 *   '\t' horizontal tab
 *   '\n' newline
 *
 * Example input:
 *   hello   world
 *   foo     bar
 *
 * Expected output:
 *   Number of blanks:   2
 *   Number of tabs:     2
 *   Number of newlines: 2
 *
 * Author : Dax Patel
 * Date   : 2026-06-15
 */

#include <stdio.h>

int main(void)
{
	int c;
	int nl, nt, nb;

	nl = nt = nb = 0;

	printf("Enter Characters: (Ctrl+D To exit)\n");
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			nl++;
		} else if (c == ' ') {
			nb++;
		} else if (c == '\t') {
			nt++;
		}
	}

	printf("Number of blanks: %d\n", nb);
	printf("Number of tabs: %d\n", nt);
	printf("Number of newlines: %d\n", nl);

	return 0;
}
