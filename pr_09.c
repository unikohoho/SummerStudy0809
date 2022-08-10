//pr_08�� �迭 ��� �����͸� �̿��Ͽ� ����

#include<stdio.h>
#define SIZE 5

double get_array_avg(int* p, int n);
void print_array(int* p, int n);

int main(void) {
	int data[SIZE] = { 10, 20, 30, 40,50 };
	int* pd = data;
	double result;

	print_array(pd, SIZE);
	result = get_array_avg(pd, SIZE);

	printf("�迭 ���ҵ��� ��� = %.2lf\n", result);

	return 0;
}
double get_array_avg(int* p, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += *(p + i);

	return (double)sum / n;
}
void print_array(int* p, int n) {
	printf("[ ");
	for (int i = 0; i < n; i++)
		printf("%d ", *(p + i));
	printf("]\n");
}