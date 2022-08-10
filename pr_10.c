//�л� 10���� ������ �Է¹޾� 
//���, �ִ밪, �ּҰ��� ���غ���
//�迭 �̿�

#include<stdio.h>
#define SIZE 10

double get_avg(int data[], int n);
int get_max(int data[], int n);
int get_min(int data[], int n);

int main(void) {
	int scores[SIZE];
	for (int i = 0; i < SIZE; i++) {
		printf("�л� %d ���� �Է� : ",(i+1));
		scanf("%d", &scores[i]);
	}
	double avg = get_avg(scores, SIZE);
	int max = get_max(scores, SIZE);
	int min = get_min(scores, SIZE);

	printf("���� ��� = %.2lf\n", avg);
	printf("�ְ����� = %d\n", max);
	printf("�������� = %d\n", min);

	return 0;

}
double get_avg(int data[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += data[i];

	return (double)sum / n;
}
int get_max(int data[], int n) {
	int max = data[0];
	for (int i = 1; i < n; i++) {
		if (data[i] > max)
			max = data[i];
	}
	return max;
}
int get_min(int data[], int n) {
	int min = data[0];
	for (int i = 1; i < n; i++) {
		if (data[i] < min)
			min = data[i];
	}
	return min;
}