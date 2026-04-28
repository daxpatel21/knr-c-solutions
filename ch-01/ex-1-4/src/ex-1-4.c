/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter 1, Exercise 1-4
 *
 * Write a program to print the corresponding
 * Celsius-to-Fahrenheit conversion table.
 *
 * Formula: fahr = (9.0 / 5.0) * celsius + 32.0
 *
 * Expected output:
 *   Celsius   Fahr
 *         0   32.0
 *        20   68.0
 *     ...
 *
 * Author : Dax Patel
 * Date   : 2026-04-29
 */

#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Celsius\tFahrenheit\n\n");
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%7.0f\t%10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
