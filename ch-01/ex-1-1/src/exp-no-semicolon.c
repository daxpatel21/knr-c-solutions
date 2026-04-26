/*
 * EXPERIMENT 3: Remove the semicolon after printf()
 * ---------------------------------------------------
 * What was removed: The ; at the end of the printf line
 *
 * Compile this file:
 *   gcc -Wall -Wextra -std=c99 exp-no-semicolon.c
 *
 * Expected error:
 *   exp-no-semicolon.c:36:5: error: expected ';' before 'return'
 *
 * Why this happens:
 *   In C, every statement must end with a semicolon.
 *   The semicolon tells the compiler "this statement is finished."
 *   Without it, the compiler keeps reading and gets confused when
 *   it finds 'return' where it expected a semicolon.
 *
 * Lesson:
 *   C statements always end with ;
 *   This is one of the most common beginner mistakes.
 */

#include <stdio.h>

int main(void)
{
	printf("hello, world\n") /* ; intentionally removed */

	    return 0;
}
