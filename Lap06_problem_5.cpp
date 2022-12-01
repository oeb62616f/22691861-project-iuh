/*

Project: Lap_No6 problem 5
	- Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 11/11/2022

*/

// Include
#include <stdio.h>
#include <stdlib.h>

// Creating
void draw_triangle(int height);
void draw_reverse_triangle(int height);
void draw_rectangle_fill(int height);
void draw_rectangle_empty(int height);
void draw_isosceles_triangle(int height);

// Creating variables
int i;
int j;
int height;

// Main
int main()
{
	printf("Nhap chieu cao h: ");
	scanf("%d", &height);

	draw_triangle(height);
	draw_reverse_triangle(height);
	draw_rectangle_fill(height);
	draw_rectangle_empty(height);
	draw_isosceles_triangle(height);

	return 0;
}

void draw_triangle(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

void draw_reverse_triangle(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < h - i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

void draw_rectangle_fill(int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < h; j++)
		{
			if (j == 0 || i == h - 1 || i == j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
}

void draw_rectangle_empty(int h)
{
	for (int i = 0; i < h - i; i++)
	{
		for (int j = 0; j < h; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\n");
}

void draw_isosceles_triangle(int h)
{
	for (int i = 0; i <= h - i; i++)
	{
		for (int j = 0; j <= h; j++)
		{
			if (i == 0 || i == h || j == 0 || j == h || i == h / 2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
