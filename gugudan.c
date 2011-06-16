#include <stdio.h>

void print_7_n(int n) {
	printf("7 * %d = %d\n", n, 7*n);
}

int main(int argc, char *argv[]) {

	int i, n;

	scanf("%d", &n);

	print_7_n(n);

/*	for(i=1;i<10;i++) {
		print_7_n(i);
	}*/

	return 0;
}
