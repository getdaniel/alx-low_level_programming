#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * positive_or_negative - prints the number as negative or positive.
 * largest_number - prints the largest of three numbers.
 * print_remaining_days - prints the validity of the year with its day.
 * convert_day - converts the year to day.
 *
 * @i: number that checked for positive or negative
 *
 * largest_number - prints the largest of a, b, c
 */
void positive_or_negative(int i);
int largest_number(int a, int b, int c);
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
