#include <stdio.h>
#include <math.h>

int main() {
	float tempo;
	double atletas = 0;

	scanf("%f", &tempo);

	while (1) {
		float t;

		scanf("%f", &t);

		if (t <= 0) break;

		if (t <= tempo) atletas++;
	}

	int serie = ceil(atletas / 8);

	printf("%d %d", (int)atletas, serie);
	
	return 0;
}