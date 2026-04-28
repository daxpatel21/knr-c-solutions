/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter 1, Exercise 1-5
 *
 * Modify the temperature conversion program to print
 * the Fahrenheit-to-Celsius table in reverse order,
 * from 300 degrees down to 0.
 *
 * Expected output:
 *   Fahr   Celsius
 *    300    148.9
 *    280    137.8
 *     ...
 *      0    -17.8
 *
 * Author : Dax Patel
 * Date   : 2026-04-26
 */

#include <stdio.h>

int main(void)
{
	int fahr;

	printf("Fahrenheit\tCelsius\n\n");
	for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
		printf("%10d\t%7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}

	return 0;
}
