#include <stdio.h>

int main() {
	int n;
	int seq = 1;

	scanf("%d", &n);

	if (n <= 0) printf("Você entrou com %d, tente de novo na próxima", n);
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i + 1; j++) {
				if (seq <= 9) {
					if (j != i) printf(" %d ", seq);
					else printf(" %d", seq);
				}
				else {
					if (j != i) printf("%d ", seq);
					else printf("%d", seq);
				}

				seq++;
			}

			printf("\n");
		}
	}
}