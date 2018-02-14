/*
 * 9.c
 *
 *  Created on: Feb 14, 2018
 *      Author: D
 */
#include<stdio.h>
int main() {
	char a[5] = { 'z', 'y', 'x', 'w', 'v' };
	int i, j, k, l = 1;
	for (j = 5; j > 0; j--, l++) {
		for (i = 0; i < j; i++) {
			printf("%c", a[i]);
		}
		for (i = j - 2; i >= 0; i--) {
			printf("%c", a[i]);
		}
		printf("\n");
		for (k = 0; k < l; k++) {
			printf(" ");
		}
	}
	return 0;
}

