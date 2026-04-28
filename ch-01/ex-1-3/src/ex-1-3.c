/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter 1, Exercise 1-3
 *
 * Modify the Fahrenheit-to-Celsius temperature conversion
 * program to print a heading above the table.
 *
 * Expected output:
 *   Fahr   Celsius
 *      0    -17.8
 *     20     -6.7
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

	fahr = lower;
	printf("Fahrenheit\tCelsius\n\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%10.0f\t%7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
