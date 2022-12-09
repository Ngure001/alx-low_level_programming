nclude <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main -  assign a random number to the variable n each time it is executed
 *
 * Return: 0
int main(void)

{

		int n;
		int x;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				x = n % 10;
				printf("Last digit of %d is %d", n, x);
				if (x > 5)
				{
				printf("and is greater than 5"
				}
				if (x == 0)
				{
				printf("and is zero");
				}
				if (x > 6 && x != 0)
				{
				printf("and is less than 6 but not zero");
				}
				printf("\n");			

					return (0);

}
