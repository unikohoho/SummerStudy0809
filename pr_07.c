//pr_06�� �����͸� �̿��ؼ� ����

#include<stdio.h>
#define SIZE 5

int get_sum(int* p);

int main(void) {
	int data[SIZE];
	int value;
	printf("���� �Է� : ");
	for (int i = 0; i < SIZE; i++)
		scanf("%d", &data[i]);

	value = get_sum(data);

	printf("�� = %d\n", value);

	return 0;

}

int get_sum(int* p) {
	int result = 0;

	for (int i = 0; i < SIZE; i++)
		result += *(p + i);

	return result;

}