#include <stdio.h>

int main() {
	int n;
	int corrida = 0;
	int salto = 0;
	int lancamento = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		while (1) {
			char prova;

			scanf("%c ", &prova);

			if (prova == 'F') break;
			else if (prova == 'C') corrida++;
			else if (prova == 'S') salto++;
			else if (prova == 'L') lancamento++;
		}
	}

	printf("%d %d %d %d", corrida, salto, lancamento, corrida + salto + lancamento);
}