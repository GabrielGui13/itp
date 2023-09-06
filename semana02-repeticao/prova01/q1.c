#include <stdio.h>

int main() {
	int n;
	char letra;

	scanf("%d %c", &n, &letra);

	n--;

	// int n2 = ;
	int aux1 = n/2 - 1;
	int aux2 = n/2;
	int auxB = 0;

	for (int i = 0; i < n; i++) {
		// printf("%d%d%d ", aux2, auxB, i + 1);

		if (n % 2 == 0) {
			for (int j = 0; j < auxB; j++) {
				printf(" ");
			}

			printf("%c", letra);

			for (int j = 0; j < aux1 * 2; j++) {
				printf(" ");
			}

			printf("%c\n", letra);

			if (i + 1 < n / 2) {
				aux1--;
				auxB++;
			}
			else if (i + 1 > n / 2) {
				aux1++;
				auxB--;
			}
		}
		else {
			for (int j = 0; j < auxB; j++) {
				printf(" ");
			}

			printf("%c", letra);

			for (int j = 0; j < aux2 * 2 - 1; j++) {
				printf(" ");
			}

			if (aux2 != 0) printf("%c\n", letra);
			else printf("\n");

			if (i + 1)
			if (i + 1 <= n / 2) {
				aux2--;
				auxB++;
			}
			else if (i + 1 >= n / 2 + 1) {
				aux2++;
				auxB--;
			}
		}
	}
	
	return 0;
}