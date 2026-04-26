/*
 * EXPERIMENT 6: Remove return 0
 * ------------------------------
 * What was removed: The return 0; statement
 *
 * Compile this file:
 *   gcc -Wall -Wextra -std=c99 exp-no-return.c
 *
 * Expected behaviour:
 *   Compiles with NO errors and NO warnings in C99/C11.
 *   Program runs and prints normally.
 *
 *   Check exit code after running:
 *     ./exp-no-return
 *     echo $?      <-- prints 0 in C99, undefined in older C
 *
 * Why this happens:
 *   In C99 and later, reaching the end of main() without a return
 *   statement is equivalent to return 0. The compiler handles it.
 *   In older C (C89), omitting return produced undefined behaviour.
 *
 * Lesson:
 *   Always write return 0 explicitly. It is clearer, it works in
 *   all C versions, and it signals intentional success to the OS.
 */

#include <stdio.h>

int main(void)
{
	printf("hello, world\n");

	/* return 0; intentionally removed */
}
