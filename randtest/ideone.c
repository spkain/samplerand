#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int i, j;

	printf("srandを固定で初期化した場合\n");
	for (i = 1; i <= 10; i++) {
		printf("seed 10 %2d回目 ", i);
		srand(10);

		for (j = 0; j < 10; j++) {
			printf("%3d", rand() % 100 + 1);
		}
		printf("\n");
	}
	printf("====\n");

	printf("srandをtime(NULL)で一回初期化した場合\n");
	srand((unsigned) time(NULL));
	for (i = 1; i <= 10; i++) {
		printf("seed: time(NULL) %2d回目 ", i);

		for (j = 0; j < 10; j++) {
			printf("%3d", rand() % 100 + 1);
		}
		printf("\n");
	}
	printf("====\n");

	printf("srandをtime(NULL)で毎回初期化した場合\n");
	//srand((unsigned) time(NULL));
	for (i = 1; i <= 10; i++) {
		printf("seed: time(NULL) %2d回目 ", i);
		srand((unsigned) time(NULL));

		for (j = 0; j < 10; j++) {
			printf("%3d", rand() % 100 + 1);
		}
		printf("\n");
	}
	return 0;

}