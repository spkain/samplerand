#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int i, j;

	printf("srand���Œ�ŏ����������ꍇ\n");
	for (i = 1; i <= 10; i++) {
		printf("seed 10 %2d��� ", i);
		srand(10);

		for (j = 0; j < 10; j++) {
			printf("%3d", rand() % 100 + 1);
		}
		printf("\n");
	}
	printf("====\n");

	printf("srand��time(NULL)�ň�񏉊��������ꍇ\n");
	srand((unsigned) time(NULL));
	for (i = 1; i <= 10; i++) {
		printf("seed: time(NULL) %2d��� ", i);

		for (j = 0; j < 10; j++) {
			printf("%3d", rand() % 100 + 1);
		}
		printf("\n");
	}
	printf("====\n");

	printf("srand��time(NULL)�Ŗ��񏉊��������ꍇ\n");
	//srand((unsigned) time(NULL));
	for (i = 1; i <= 10; i++) {
		printf("seed: time(NULL) %2d��� ", i);
		srand((unsigned) time(NULL));

		for (j = 0; j < 10; j++) {
			printf("%3d", rand() % 100 + 1);
		}
		printf("\n");
	}
	return 0;

}