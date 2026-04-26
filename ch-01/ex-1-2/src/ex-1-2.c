/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter 1, Exercise 1-2
 *
 * Experiment with printf() escape sequences.
 * What happens when the argument string contains \c
 * where c is not a recognised escape character?
 *
 * Recognised escape sequences in C:
 *   \n  newline          \t  horizontal tab
 *   \r  carriage return  \b  backspace
 *   \f  form feed        \v  vertical tab
 *   \a  alert (bell)     \\  backslash
 *   \'  single quote     \"  double quote
 *   \0  null character
 *
 * Experiment: pass an unrecognised sequence like \c, \d, \e, \j, \q
 * to printf() and observe compiler warnings and runtime output.
 *
 * Author : Dax Patel
 * Date   : 2026-04-26
 */

#include <stdio.h>

int main(void)
{
	printf("hello, world\c");

	return 0;
}
