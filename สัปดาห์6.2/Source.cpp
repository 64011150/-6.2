#include<stdio.h>
int main() {
	int i, j, x, z, b;
	scanf_s("%d", &b);
	for (i = 1; i <= b; i++) {
		j = b - 1;
		while(j >= i) {
			j = j - 1;
			printf(" ");
		}
		x = 1;
		while(x < i) {
			x = x + 1;
			printf("*");
		}
		z = 1;
		while(z <= i) {
			z = z + 1;
			printf("*");
		}
		while(j >= i) {
			j = b - 1;
			j = j + 1;
			printf(" ");
		}
		printf("\n");
	}
}