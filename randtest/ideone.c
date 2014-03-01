#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int i, j;

	printf("srand‚ğŒÅ’è‚Å‰Šú‰»‚µ‚½ê‡\n");
	for (i = 1; i <= 10; i++) {
		printf("seed 10 %2d‰ñ–Ú ", i);
		srand(10);

		for (j = 0; j < 10; j++) {
			printf("%3d", rand() % 100 + 1);
		}
		printf("\n");
	}
	printf("====\n");

	printf("srand‚ğtime(NULL)‚Åˆê‰ñ‰Šú‰»‚µ‚½ê‡\n");
	srand((unsigned) time(NULL));
	for (i = 1; i <= 10; i++) {
		printf("seed: time(NULL) %2d‰ñ–Ú ", i);

		for (j = 0; j < 10; j++) {
			printf("%3d", rand() % 100 + 1);
		}
		printf("\n");
	}
	printf("====\n");

	printf("srand‚ğtime(NULL)‚Å–ˆ‰ñ‰Šú‰»‚µ‚½ê‡\n");
	//srand((unsigned) time(NULL));
	for (i = 1; i <= 10; i++) {
		printf("seed: time(NULL) %2d‰ñ–Ú ", i);
		srand((unsigned) time(NULL));

		for (j = 0; j < 10; j++) {
			printf("%3d", rand() % 100 + 1);
		}
		printf("\n");
	}
	return 0;

}