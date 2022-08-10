//pr_06을 포인터를 이용해서 구현

#include<stdio.h>
#define SIZE 5

int get_sum(int* p);

int main(void) {
	int data[SIZE];
	int value;
	printf("점수 입력 : ");
	for (int i = 0; i < SIZE; i++)
		scanf("%d", &data[i]);

	value = get_sum(data);

	printf("합 = %d\n", value);

	return 0;

}

int get_sum(int* p) {
	int result = 0;

	for (int i = 0; i < SIZE; i++)
		result += *(p + i);

	return result;

}