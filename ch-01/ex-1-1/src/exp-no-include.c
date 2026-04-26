/*
 * EXPERIMENT 1: Remove #include <stdio.h>
 * ----------------------------------------
 * What was removed: The #include <stdio.h> line
 *
 * Compile this file:
 *   gcc -Wall -Wextra -std=c99 exp-no-include.c
 *
 * Expected error:
 *   warning: implicit declaration of function 'printf'
 *   warning: incompatible implicit declaration of built-in function 'printf'
 *
 * Why this happens:
 *   printf() is defined in the standard library header stdio.h.
 *   Without #include <stdio.h>, the compiler has never seen printf's
 *   declaration and does not know what arguments it takes or what
 *   it returns. In C99 and later this is an error. In older C, the
 *   compiler would guess — often wrongly.
 *
 * Lesson:
 *   Always include the header that declares the functions you use.
 */

/* #include <stdio.h>  <-- intentionally removed */

int main(void)
{
	printf("hello, world\n");

	return 0;
}
