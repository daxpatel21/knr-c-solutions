/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter 1, Exercise 1-7
 *
 * Write a program to print the value of EOF.
 *
 * EOF is a symbolic constant defined in <stdio.h>.
 * Its value is implementation-defined but is guaranteed
 * to be a negative integer — typically -1 on most systems.
 *
 * EOF is intentionally outside the range of unsigned char (0-255)
 * so getchar() can return both valid characters and EOF
 * without ambiguity. This is why getchar() returns int, not char.
 *
 * Expected output:
 *   EOF = -1
 *
 * Author : Dax Patel
 * Date   : 2026-04-29
 */

#include <stdio.h>

int main(void)
{
	printf("EOF = %d\n", EOF);

	return 0;
}
