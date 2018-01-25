/*
 * test.c
 *
 *  Created on: Jan 25, 2018
 *      Author: D
 */
#include <stdio.h>
void newline();

int main(int argc, char **argv) {
	int n, i, j,  a = -2, b;
	n=5;

//For upper pyramid
	for (i = 0; i <= n; i++, a++) {
	//loop for space
		for (b = a +2; b < n; b++) {
			printf(" ");
		}

		for (j = i; j > 0; j--) {
			printf("%d", j);

		}
		for (j = 0; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}


	//For down pyramid
	for (i = n - 1; i >= 0; i--) {
	//loop for space
		for (b = a ; b <n; b++) {
			printf(" ");
		}
		a--;

		for (j = i; j > 0; j--) {
			printf("%d", j);
		}

		for (j = 0; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
