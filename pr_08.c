//�迭�Լ�

#include<stdio.h>
#define SIZE 5

double get_array_avg(int values[], int n);
void print_array(int values[], int n);

int main(void) {
	int data[SIZE] = { 10,20,30,40,50 };
	double result;

	print_array(data, SIZE);
	result = get_array_avg(data, SIZE);
	printf("�迭 ���ҵ��� ��� = %.lf\n", result);

	return 0;

}
double get_array_avg(int values[], int n) {
	int sum = 0;


	for (int i = 0; i < n; i++)
		sum += values[i];

	return (double)sum / n;
}
void print_array(int values[], int n) {
	printf("[ ");
	for (int i = 0; i < n; i++)
		printf("%d ", values[i]);
	printf("]\n");
}