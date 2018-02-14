/*
 * test.c
 *
 *  Created on: Jan 25, 2018
 *      Author: D
 */
#include <stdio.h>
int main(int argc, char **argv) {
	int n, i, j, a=0, b;
	printf("enter the number \n");
	scanf("%d", &n);
	for (i = 0; i <= n; i++, a++) {
		for (b = a; b < n; b++) {
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
	return 0;
}
