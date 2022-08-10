//�л� 10���� ������ �Է� �޾�
//���, �ִ밪, �ּҰ��� ���غ���
//������ �̿�

#include<stdio.h>
#define SIZE 10

double get_avg(int* p, int n);
int get_max(int* p, int n);
int get_min(int* p, int n);

int main(void) {
	int scores[SIZE];
	for (int i = 0; i < SIZE; i++) {
		printf("�л� %d ���� �Է� : ", (i + 1));
		scanf("%d", &scores[i]);
	}
	int* ps = scores;

	double avg = get_avg(ps, SIZE);
	int max = get_max(ps, SIZE);
	int min = get_min(ps, SIZE);

	printf("���� ��� = %.2lf\n", avg);
	printf("�ְ����� = %d\n", max);
	printf("�������� = %d\n", min);

	return 0;
}
double get_avg(int* p, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += *(p + i);

	return (double)sum / n;

}
int get_max(int* p, int n) {
	int max = *p;
	for (int i = 0; i < n; i++) {
		if (*(p + i) > max)
			max = *(p + i);
	}
	return max;

}
int get_min(int* p, int n) {
	int min = *p;
	for (int i = 0; i < n; i++) {
		if (*(p + i) < min)
			min = *(p + i);
	}
	return min;
}