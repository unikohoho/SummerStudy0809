//���ڿ� �迭, ������ �迭�� �̿��� ���ڿ� ���

#include<stdio.h>

int main(void) {
	char str[3][7] = { "C","Python","Java" };
	char *pstr[] = { "C","Python","Java" };

	for (int i = 0; i < 3; i++)
		printf("str[%d] = %s\n", i, str[i]);
	printf("\n");

	for (int i = 0; i < 3; i++)
		printf("pstr[% d] = %s\n", i, pstr[i]);

	return 0;


}